# Copyright 2025, LiserverYang. All rights reserved.

from . import FileIO

import os
import sys

def GenericReflectionFiles(SourceCodePath: FileIO, ReflectionSystemPath: FileIO):
    """
    Generic .gen file
    """

    os.system(f"powershell {ReflectionSystemPath.FilePathStr} {SourceCodePath.FilePathStr} {os.path.dirname(SourceCodePath.FilePathStr)} 1")