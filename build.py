# Copyright 2025, LiserverYang. All rights reserved.

# Import buildsystem
import Build.BuildSystem as BuildSystem

# We could only run this script by command line not import
if __name__ != '__main__':
    BuildSystem.Logger.Log(BuildSystem.LogLevelEnum.Error, "You could only run this srcipt by console not import.", True, -1)

# And we should check the type of current operating system
if BuildSystem.GetCurrentSystem() == BuildSystem.SystemEnum.Other:
    # Log and exit
    BuildSystem.Logger.Log(BuildSystem.LogLevelEnum.Error, "Unsupported platform. We only support Windows, MacOS and Linux.", True, -1)

# Don't write __pycatch__
BuildSystem.sys.dont_write_bytecode = True

# Copy files to folder
BuildSystem.os.system("cp ./Bin/libclang.dll ./Build/Binaries/libclang.dll")
BuildSystem.os.system("cp ./Bin/SDL3.dll ./Build/Binaries/SDL3.dll")
BuildSystem.os.system("cp ./Bin/SourceCodePro-Regular.ttf ./Build/Binaries/SourceCodePro-Regular.ttf")

# Generic folder
if not BuildSystem.FileIO("./Build/Binaries/Templates").Exists():
    BuildSystem.os.system("mkdir ./Build/Binaries/Templates")

# Just build
BuildSystem.BuildEngine(BuildSystem.FileIO("./Source"), ["./Source/Reflection/Reflection.target.py", "/Source/Editor.target.py"])