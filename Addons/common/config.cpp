#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rri_sns_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

#include "CfgMainMenuSpotlight.hpp"