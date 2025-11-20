class GVEST(CRYE_CPC): USP_CRYE_CPC {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Base);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC,AOR2,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,MC,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,MCA,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,MCD,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,MCB,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,MCT,Crye Precision CPC,Base,No);
MACRO_VEST(CRYE_CPC,RGR,Crye Precision CPC,Base,No);

class GVEST(CRYE_CPC_COMMS): USP_CRYE_CPC_COMMS {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Communications (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Comms);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_COMMS,AOR2,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,MC,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,MCA,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,MCD,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,MCB,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,MCT,Crye Precision CPC,Comms,No);
MACRO_VEST(CRYE_CPC_COMMS,RGR,Crye Precision CPC,Comms,No);

class GVEST(CRYE_CPC_COMMS_BELT): USP_CRYE_CPC_COMMS_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Communications Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Comms);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_COMMS_BELT,AOR2,Crye Precision CPC,Comms,Yes);
MACRO_VEST(CRYE_CPC_COMMS_BELT,MC,Crye Precision CPC,Comms,Yes);
MACRO_VEST(CRYE_CPC_COMMS_BELT,RGR,Crye Precision CPC,Comms,Yes);

class GVEST(CRYE_CPC_FAST): USP_CRYE_CPC_FAST {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Fast (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Fast);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_FAST,AOR2,Crye Precision CPC Fast,Fast,No);
MACRO_VEST(CRYE_CPC_FAST,MC,Crye Precision CPC Fast,Fast,No);
MACRO_VEST(CRYE_CPC_FAST,RGR,Crye Precision CPC Fast,Fast,No);

class GVEST(CRYE_CPC_FAST_BELT): USP_CRYE_CPC_FAST_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Fast Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Fast);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_FAST_BELT,AOR2,Crye Precision CPC Fast,Fast,Yes);
MACRO_VEST(CRYE_CPC_FAST_BELT,MC,Crye Precision CPC Fast,Fast,Yes);
MACRO_VEST(CRYE_CPC_FAST_BELT,RGR,Crye Precision CPC Fast,Fast,Yes);

class GVEST(CRYE_CPC_LEAD): USP_CRYE_CPC_LEAD{
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Lead (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Lead);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_LEAD,MC,Crye Precision CPC Lead,Lead,No);
MACRO_VEST(CRYE_CPC_LEAD,RGR,Crye Precision CPC Lead,Lead,No);

class GVEST(CRYE_CPC_LEAD_BELT): USP_CRYE_CPC_LEAD_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Lead Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Lead);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_LEAD_BELT,MC,Crye Precision CPC Lead,Lead,Yes);
MACRO_VEST(CRYE_CPC_LEAD_BELT,RGR,Crye Precision CPC Lead,Lead,Yes);

class GVEST(CRYE_CPC_LIGHT): USP_CRYE_CPC_LIGHT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Light (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Light);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_LIGHT,MC,Crye Precision CPC Light,Light,No);
MACRO_VEST(CRYE_CPC_LIGHT,RGR,Crye Precision CPC Light,Light,No);

class GVEST(CRYE_CPC_LIGHT_BELT): USP_CRYE_CPC_LIGHT_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Light Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Light);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_LIGHT_BELT,MC,Crye Precision CPC Light,Light,Yes);
MACRO_VEST(CRYE_CPC_LIGHT_BELT,RGR,Crye Precision CPC Light,Light,Yes);

class GVEST(CRYE_CPC_MEDIC): USP_CRYE_CPC_MEDIC {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Medic (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Medic);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_MEDIC,MC,Crye Precision CPC Medic,Medic,No);
MACRO_VEST(CRYE_CPC_MEDIC,RGR,Crye Precision CPC Medic,Medic,No);

class GVEST(CRYE_CPC_MEDIC_BELT): USP_CRYE_CPC_MEDIC_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Medic Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Medic);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_MEDIC_BELT,MC,Crye Precision CPC Medic,Medic,Yes);
MACRO_VEST(CRYE_CPC_MEDIC_BELT,RGR,Crye Precision CPC Medic,Medic,Yes);

class GVEST(CRYE_CPC_WEAPON): USP_CRYE_CPC_WEAPON {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Weapons (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Weapons);
        Belt = QUOTE(No);
    }; 
};

MACRO_VEST(CRYE_CPC_WEAPON,MC,Crye Precision CPC Weapons,Weapons,No);
MACRO_VEST(CRYE_CPC_WEAPON,RGR,Crye Precision CPC Weapons,Weapons,No);

class GVEST(CRYE_CPC_WEAPON_BELT): USP_CRYE_CPC_WEAPON_BELT {
    author = AUTHOR;
    displayName = "[SN] Crye Precision CPC Weapons Belt (CBR)";

    class ItemInfo: ItemInfo {
		containerClass = VEST_SUPPLYCLASS;
		mass = 80;

		VEST_PROTECTION;
	};
    class XtdGearInfo {
        model = QGVAR(CRYE_CPC);
        color = QUOTE(CBR);
        type = QUOTE(Weapons);
        Belt = QUOTE(Yes);
    }; 
};

MACRO_VEST(CRYE_CPC_WEAPON_BELT,MC,Crye Precision CPC Weapons,Weapons,Yes);
MACRO_VEST(CRYE_CPC_WEAPON_BELT,RGR,Crye Precision CPC Weapons,Weapons,Yes);