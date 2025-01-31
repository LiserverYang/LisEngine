# LisEngine

A simple, easy-to-learn, and open-source game engine.

## How to build

We used the UE-like build system but python. To build our engine, you can do following steps:

1) Donwload the source with command `git clone https://github.com/LiserverYang/LisEngine`.
2) Move to the folder `LisEngine`.
3) Run command `python build.py`.
4) The binary file is in `./Build/Binaries/`.

And if there's something wrong when building, please check all 3rdpartys if it's exits.
For exmaple, you should copy `libclang.dll` `glfw3.dll` `SDL3.dll` to folder `Build/Binaries`.
See the 3rdpartys list and check the binary files you need.

## Thanks

Thanks for these third party project, the engine used their code and thanks them (In no particular order):

1. Imgui, in `Source/ThirdParty/ImGUI`, MIT License
2. SDL, in `Source/ThirdParty/SDL3`, Zlib License
3. VulkanSDK, in `Source/ThirdParty/VulkanSDK`, Not sure. The majority of the materials are MIT or Apache 2.0 licenses. see VulkanSDK.LICENSE.txt.
4. Mustache, in `Source/Reflection/MetaParser/ThirdParty/Mustache`, BSL-1.0 License
5. Json, in `Source/Reflection/MetaParser/ThirdParty/Json`, MIT License

All these licenses and github links are in their own folders, check the and get more informations. Thanks them again.