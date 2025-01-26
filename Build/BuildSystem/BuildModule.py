# Copyright 2025, LiserverYang. All rights reserved.

from .BuildContext import BuildContext
from .Logger import Logger
from .LogLevelEnum import LogLevelEnum
from .FileSystem import FileIO
from .TargetTypeEnum import TargetTypeEnum
from .BinaryTypeEnum import BinaryTypeEnum
from .Functions import GetCurrentSystem
from .SystemEnum import SystemEnum
import os

def BuildModule(ModuleName: str):
    """
    Build a module.
    """

    ModuleID: int = BuildContext.BuildOrder.index(ModuleName)

    # Do some checks
    if not BuildContext.ModuleConfiguration[ModuleID].bBuildThisModule:
        return
    
    # Check all depends
    for Depend in BuildContext.ModuleConfiguration[ModuleID].ModulesDependOn:
        if not BuildContext.BuildedModule[BuildContext.BuildOrder.index(Depend)]:
            Logger.Log(LogLevelEnum.Error, "Module '" + ModuleName + "' depend on module '" + Depend + "', but it didn't build.", True, -1)

    Logger.Log(LogLevelEnum.Info, f"[{BuildContext.BuildOrder.index(ModuleName) + 1}/{len(BuildContext.BuildOrder)}] Building module '{ModuleName}'")

    # Make file dir

    MiddleFilesDir: str = f"./Build/Intermediate/{BuildContext.TargetName}/{ModuleName}"
    BinaryFilesDir: str = "./Build/Binaries"

    try:
        os.makedirs(MiddleFilesDir)
    except:
        # The folder exsits
        pass

    WaitCompileCFilesList: list[str] = []
    WaitCompileCppFilesList: list[str] = []

    COFilesList: list[str] = []
    CxxOFilesList: list[str] = []

    def Search(Folder: FileIO):
        """
        Help to search files
        """

        for SubFileStr in Folder.GetSubFiles():
            SubFileFileIO: FileIO = FileIO(SubFileStr)
            if SubFileFileIO.IsFolder():
                Search(SubFileFileIO)
            else:
                if SubFileFileIO.EndSwitch() == ".cpp":
                    WaitCompileCppFilesList.append(SubFileFileIO.FilePathStr)
                elif SubFileFileIO.EndSwitch() == ".c":
                    WaitCompileCFilesList.append(SubFileFileIO.FilePathStr)

    # Search all files
    Search(FileIO(os.path.dirname(BuildContext.ModulePath[ModuleID]) + "/Private/"))

    # Check if it has been compiled
    for File in WaitCompileCFilesList + WaitCompileCppFilesList:
        FileFileIO: FileIO = FileIO(File)
        MidFileFileIO: FileIO = FileIO(f"{MiddleFilesDir}/{FileIO(File).FileName()}.o")
        if MidFileFileIO.Exits() and MidFileFileIO.LastChange() > FileFileIO.LastChange():
            if File in WaitCompileCFilesList:
                WaitCompileCFilesList.remove(File)
                COFilesList.append(f"{MiddleFilesDir}/{FileIO(File).FileName()}.o")
            else:
                WaitCompileCppFilesList.remove(File)
                CxxOFilesList.append(f"{MiddleFilesDir}/{FileIO(File).FileName()}.o")

    # If it is null, we should not build it

    AllDependsSkiped: bool = True
    TargetExits: bool = True
    PlatFormEndSwitchExe: str = ".exe" if GetCurrentSystem() == SystemEnum.Windows else ""
    PlatFormEndSwitchDy : str = ".dll" if GetCurrentSystem() == SystemEnum.Windows else ".so"
    
    for Depend in BuildContext.ModuleConfiguration[ModuleID].ModulesDependOn:
        if not BuildContext.SkipedModule[BuildContext.BuildOrder.index(Depend)]:
            AllDependsSkiped = False
            break

    if BuildContext.ModuleConfiguration[ModuleID].BinaryType == BinaryTypeEnum.EntryPoint:
        TargetExits = FileIO(f"./Build/Binaries/{ModuleName}{PlatFormEndSwitchExe}").Exits()
    elif BuildContext.ModuleConfiguration[ModuleID].BinaryType == BinaryTypeEnum.DynamicLib:
        TargetExits = FileIO(f"./Build/Binaries/lib{ModuleName}{PlatFormEndSwitchDy}").Exits()
    else:
        TargetExits = FileIO(f"./Build/Binaries/lib{ModuleName}.a").Exits()

    if BuildContext.ModuleConfiguration[ModuleID].AutoSkiped or (len(WaitCompileCFilesList) == len(WaitCompileCppFilesList) == 0 and AllDependsSkiped and TargetExits):
        BuildContext.BuildedModule[ModuleID] = True
        BuildContext.SkipedModule[ModuleID] = True
        return

    CStanderd: str = BuildContext.ModuleConfiguration[ModuleID].CStanderd
    CxxStanderd: str = BuildContext.ModuleConfiguration[ModuleID].CxxStanderd
    ModuleAddedArguments: str = ' '.join(BuildContext.ModuleConfiguration[ModuleID].ArgumentsAdded)
    TargetAddedArguments: str = ' '.join(BuildContext.TargetConfiguration.ArgumentsAdded)
    IncludePaths: str = ' -I'.join([os.path.dirname(BuildContext.ModulePath[BuildContext.BuildOrder.index(depend)]) + "/Public/" for depend in BuildContext.ModuleConfiguration[ModuleID].ModulesDependOn + [ModuleName]])
    DependsModules: list[str] = []

    for name in BuildContext.ModuleConfiguration[ModuleID].ModulesDependOn:
        if BuildContext.ModuleConfiguration[BuildContext.BuildOrder.index(name)].LinkThisModule:
            DependsModules.append(name)

    LinkDependsStr: str = ("-l" if len(DependsModules) > 0 else "") + " -l".join(DependsModules)

    BuildResult: int = 0

    # Build all source to .o file
    for CFile in WaitCompileCFilesList:
        TargetFileName: str = f"{MiddleFilesDir}/{FileIO(CFile).FileName()}.o"
        COFilesList.append(TargetFileName)
        os.system(f"gcc {CFile} -o {TargetFileName} -std={CStanderd} {ModuleAddedArguments} {TargetAddedArguments} -I{IncludePaths} -c")

    for CppFile in WaitCompileCppFilesList:
        TargetFileName: str = f"{MiddleFilesDir}/{FileIO(CppFile).FileName()}.o"
        CxxOFilesList.append(TargetFileName)
        os.system(f"g++ {CppFile} -o {TargetFileName} -std={CxxStanderd} {ModuleAddedArguments} {TargetAddedArguments} -I{IncludePaths} -c")

    if BuildContext.ModuleConfiguration[ModuleID].BinaryType == BinaryTypeEnum.EntryPoint:
        # Build executeable
        link_command = f"g++ {' '.join(COFilesList)} {' '.join(CxxOFilesList)} -o {BinaryFilesDir}/{BuildContext.TargetName} -L./Build/Binaries/ {LinkDependsStr} {ModuleAddedArguments} {TargetAddedArguments}"
        BuildResult = os.system(link_command)
    elif BuildContext.ModuleConfiguration[ModuleID].BinaryType == BinaryTypeEnum.DynamicLib:
        # Build dynamic lib
        link_command = f"g++ {' '.join(COFilesList)} {' '.join(CxxOFilesList)} -o {BinaryFilesDir}/lib{ModuleName}.dll -L./Build/Binaries/ {LinkDependsStr} -fPIC -shared {ModuleAddedArguments} {TargetAddedArguments}"
        BuildResult = os.system(link_command)
    elif BuildContext.ModuleConfiguration[ModuleID].BinaryType == BinaryTypeEnum.StaticLib:
        # Build static lib
        link_command = f"ar rcs {BinaryFilesDir}/lib{ModuleName}.a {' '.join(COFilesList)} {' '.join(CxxOFilesList)} {ModuleAddedArguments} {TargetAddedArguments}"
        for depend in DependsModules:
            if BuildContext.ModuleConfiguration[BuildContext.BuildOrder.index(depend)].BinaryType == BinaryTypeEnum.StaticLib:
                link_command += f" {depend}"
        BuildResult = os.system(link_command)
    
    if BuildResult == 0:
        BuildContext.BuildedModule[ModuleID] = True
    else:
        Logger.Log(LogLevelEnum.Error, f"There's something error when build module '{ModuleName}' in target '{BuildContext.TargetName}', and the compiler return value '{BuildResult}' not 0.") 