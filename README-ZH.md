# LisEngine

[English](./README.md)

一个简单、易学、开源的游戏引擎

## 如何编译

我们使用类似虚幻的编译系统，但是不同于虚幻使用c#配置，我们使用python对项目进行模块配置和编译系统的制作；如果你想要编译这个引擎，按照下面的步骤：

1) 使用git下载引擎源码 `git clone https://github.com/LiserverYang/LisEngine`.
2) 移动到文件夹 `LisEngine`.
3) 运行编译脚本 `python build.py`.
4) 二进制文件就在 `./Build/Binaries/`.

如果在编译时有任何问题，请检查所有的第三方二进制库是否存在（由于gitignore的原因，一些二进制库可能不会被提交）
例如，你需要复制`libclang.dll` `glfw3.dll` `SDL3.dll`到文件夹`Build/Binaries`
查看下面的第三方库列表然后检查你需要的二进制文件。

（尽管理论上这个项目支持 Unix 系统，但是实际上我们还没有适配）

## 感谢

感谢这些第三方项目，引擎使用了它们的代码并对此表示感谢（排名不分先后）：

1. Imgui, 在 `Source/ThirdParty/ImGUI`, MIT协议
2. SDL, 在 `Source/ThirdParty/SDL3`, Zlib协议
3. VulkanSDK, 在 `Source/ThirdParty/VulkanSDK`, 不确定. 大多数是 MIT 或 Apache 2.0 协议. 参阅 VulkanSDK.LICENSE.txt.
4. Mustache, 在 `Source/Reflection/MetaParser/ThirdParty/Mustache`, BSL-1.0 协议
5. Json, 在 `Source/Reflection/MetaParser/ThirdParty/Json`, MIT 协议

所有的这些协议以及对应的github仓库地址都在它们的自己文件夹内，参阅这些文件夹来获取更多信息。再次感谢它们。