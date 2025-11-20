class XtdGearModels
{
    class CfgVehicles {
        class GVAR(45L_RUCKSACK) {
            label = "[SN] 45L Rucksack";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {"BLK","GRN","MC","MCD"};

                class BLK { label = "BLK";};
                class GRN { label = "GRN";};
                class MC { label = "MC";};
                class MCD { label = "MCD";};
            };
        };
        class GVAR(DELTA_BAG) {
            label = "[SN] Delta Bag";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","AOR1","AOR2","CBR","GRY","RGR",
                    "MC","MCA","MCB","MCD","MCT","M81"
                    };

                class BLK { label = "BLK";};
                class AOR1 { label = "AOR1";};
                class AOR2 { label = "AOR2";};
                class CBR { label = "CBR";};
                class GRY { label = "GRY";};
                class RGR { label = "RGR";};
                class MC { label = "MC";};
                class MCA { label = "MCB";};
                class MCD { label = "MCD";};
                class MCT { label = "MCT";};
                class M81 { label = "M81";};
            };
        };
        class GVAR(HYDRATION_PACK) {
            label = "[SN] Hydration Pack";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","CBR","AOR1","AOR2","GRY","RGR",
                    "MC","MCA","MCB","MCD","MCT","M81",
                    "3CD"
                    };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class AOR1 { label = "AOR1";};
                class AOR2 { label = "AOR2";};
                class GRY { label = "GRY";};
                class RGR { label = "RGR";};
                class MC { label = "MC";};
                class MCA { label = "MCB";};
                class MCD { label = "MCD";};
                class MCT { label = "MCT";};
                class M81 { label = "M81";};
                class 3CD { label = "3CD";};
            };
        };
        class GVAR(HYDROPACK) {
            label = "[SN] SSP Hydration Pack";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","CBR","GRY","RGR","MC"
                    };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class GRY { label = "GRY";};
                class RGR { label = "RGR";};
                class MC { label = "MC";};
            };
        };
        class GVAR(MEDIUM_PACK) {
            label = "[SN] Medium Pack";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","CBR","RGR",
                    };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class RGR { label = "RGR";};
            };
        };
        class GVAR(MOAB_RUSH) {
            label = "[SN] MOAB Rush";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","CBR","TAN",
                    };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class TAN { label = "TAN";};
            };
        };
        class GVAR(PACK_BREACHER) {
            label = "[SN] Pack Breacher";
            author = AUTHOR;
            options[] = {"color"};

            class color {
                changeingame = 0;
                values[] = {
                    "BLK","CBR","RGR","MC"
                    };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class TAN { label = "TAN";};
                class MC { label = "MC";};
            };
        }; 
        class GVAR(REEBOW_3DAP) {
            label = "[SN] Overwatch Backpack";
            author = AUTHOR;
            options[] = {"color","type"};

            class color {
                changeingame = 0;
                values[] = {"BLK","CBR","GRY","RGR","MC",
                    "MCA","MCB","MCD","MCT","AOR1","AOR2"
                };

                class BLK { label = "BLK";};
                class CBR { label = "CBR";};
                class GRY { label = "GRY";};
                class RGR { label = "RGR";};
                class MC { label = "MC";};
                class MCA { label = "MCA";};
                class MCB { label = "MCB";};
                class MCD { label = "MCD";};
                class MCT { label = "MCT";};
                class AOR1 { label = "AOR1";};
                class AOR2 { label = "AOR2";};
            };

            class type {
                changeingame = 0;
                values[] = {"Base","ACC1","ACC2","ACC3","ACC4","ACC5","ACC6","ACC7","ACC8","ACC9","ACC10"};

                class Base { label = "Base";};
                class ACC1 { label = "ACC1";};
                class ACC2 { label = "ACC2";};
                class ACC3 { label = "ACC3";};
                class ACC4 { label = "ACC4";};
                class ACC5 { label = "ACC5";};
                class ACC6 { label = "ACC6";};
                class ACC7 { label = "ACC7";};
                class ACC8 { label = "ACC8";};
                class ACC9 { label = "ACC9";};
                class ACC10 { label = "ACC10";};
            };
        };
    };
    class CfgWeapons {
        class GVAR(CRYE_CPC) {
            label = "[SN] Crye CPC";
            author = AUTHOR;
            options[] = {"color","type","belt"};

            class color {
                changeingame = 0;
                values[] = {"AOR2","MC","MCA","MCD","MCB",
                    "MCT","RGR"
                };

                class AOR2 { label = "AOR2";};
                class MC { label = "MC";};
                class MCA { label = "MCA";};
                class MCD { label = "MCD";};
                class MCB { label = "MCB";};
                class MCT { label = "MCT";};
                class RGR { label = "RGR";};
            };

            class type {
                changeingame = 0;
                values[] = {"Base","Comms","Fast","Lead","Light","Medic","Weapons"};

                class Base { label = "Base";};
                class Comms { label = "Comms";};
                class Fast { label = "Fast";};
                class Lead { label = "Lead";};
                class Light { label = "Light";};
                class Medic { label = "Medic";};
                class Weapons { label = "Weapons";};
            };

            class Belt {
                changeingame = 0;
                values[] = {"Yes","No"};

                class Yes { label = "Yes";};
                class No { label = "No";};
            };
        };
    };
};