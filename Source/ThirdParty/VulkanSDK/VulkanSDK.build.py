# Copyright 2025, LiserverYang. All rights reserved.

from Build import BuildSystem

class VulkanSDKModule(BuildSystem.ModuleBase):
    """
    Build vulkan.
    """

    def Configuration(self) -> None:
        """
        Config all settings.
        """

        self.AutoSkiped = True
        self.LinkThisModule = False
        
