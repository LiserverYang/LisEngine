# LisEngine

A simple, easy-to-learn, and open-source game engine.

## How to build

We used the UE-like build system but python. To build our engine, you can do following steps:

1) Donwload the source with command `git clone https://github.com/LiserverYang/LisEngine`.
2) Move to the folder `LisEngine`.
3) Run command `python build.py`.
4) The binary file is in `./Build/Binaries/`.

And if there's something wrong when building, please check all 3rdpartys that it's exits.
For exmaple, you should copy `libclang.dll` `glfw3.dll` `SDL3.dll` to folder `Build/Binaries`.