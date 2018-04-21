#pragma once


#include "../../data/inventory/Item.h"

class HealthPotion : public Item {

    public:

        HealthPotion() : Item("Health Potion", "Heals 20hp") {};
        void use() override;

};

class EnergyPotion : public Item {

public:

    EnergyPotion() : Item("Energy Potion", "Regenerates 50% of max energy instantly") {};
    void use() override;

};

class DamagePotion : public Item {

public:

    DamagePotion() : Item("Elixir of Might", "Increases damage done by 10% for the duration of the fight") {};
    void use() override;

};

//******* MELEE WEAPONS AND ARMOR *******

class SwordShieldLower : public Item {

public:

    SwordShieldLower() : Item("Blunt Steel Sword & Iron Shield", "+40 Health, +25 Attack") {};
    void use() override;

};

class SwordShieldHigher : public Item {

public:

    SwordShieldHigher() : Item("The Unstoppable Force & Aegis of the Kings", "+100 Health, +75 Attack") {};
    void use() override;

};

class MeleeChestLower : public Item {

public:

    MeleeChestLower() : Item("Chainmail vest", "+25 Health") {};
    void use() override;

};

class MeleeChestHigher : public Item {

public:

    MeleeChestHigher() : Item("Gleaming Chestplate", "+75 Health"){};
    void use() override;
};

class MeleeHelmetLower : public Item {

public:

    MeleeHelmetLower() : Item("Chainmail Cowl", "+10 Health"){};
    void use() override;
};

class MeleeHelmetHigher : public Item {

public:

    MeleeHelmetHigher() : Item("Dreadplate Helmet", "+25 Health"){};
    void use() override;
};

class MeleePantsLower : public Item {

public:

    MeleePantsLower() : Item("Chainmail Leggings", "+25 Health"){};
    void use() override;
};

class MeleePantsHigher : public Item {

public:

    MeleePantsHigher() : Item("Legplates of the Protector", "+50 Health"){};
    void use() override;
};

//******* RANGED WEAPONS AND ARMOR *******


class RangedBowsLower : public Item {

public:

    RangedBowsLower() : Item("Wooden Bow", "+25 Attack, +10 Energy, +35 Health"){};
    void use() override;
};

class RangedBowsHigher : public Item {

public:

    RangedBowsHigher() : Item("Heartseeker Bow", "+75 Attack, +20 Energy, +75 Health"){};
    void use() override;
};

class RangedChestLower : public Item {

public:

    RangedChestLower() : Item("Hardened Leather Tunic", "+10 Attack, +10 Health"){};
    void use() override;
};

class RangedChestHigher : public Item {

public:

    RangedChestHigher() : Item("Dragonskin Tunic", "+30 Attack, +20 Health"){};
    void use() override;
};

class RangedHelmetLower : public Item {

public:

    RangedHelmetLower() : Item("Hardened Leather Coif", "+5 Attack, +5 Health"){};
    void use() override;
};

class RangedHelmetHigher : public Item {

public:

    RangedHelmetHigher() : Item("Dreadleather Helmet", "+15 Attack, +15 Health"){};
    void use() override;
};

class RangedPantsLower : public Item {

public:

    RangedPantsLower() : Item("Hardened Leather Chaps", "+10 Attack, +15 Health"){};
    void use() override;
};

class RangedPantsHigher : public Item {

public:

    RangedPantsHigher() : Item("Dragonskin Chaps", "+30 Attack, +30 Health"){};
    void use() override;
};

//******* MAGE WEAPONS AND ARMOR *******

class MageStaffBooksLower : public Item {

public:

    MageStaffBooksLower() : Item("Wooden Staff & Spellcaster’s Tomb", "+25 Attack, +10 Energy, +35 Health"){};
    void use() override;
};

class MageStaffBooksHigher : public Item {

public:

    MageStaffBooksHigher() : Item("Infernal Greatstaff & Wildfire Orb", "+75 Attack, +20 Energy, +75 Health"){};
    void use() override;
};

class MageChestLower : public Item {

public:

    MageChestLower() : Item("Acolyte’s Robes", "+25 Attack"){};
    void use() override;
};

class MageChestHigher : public Item {

public:

    MageChestHigher() : Item("Incendiary Garb", "+50 Attack"){};
    void use() override;
};

class MageHelmetLower : public Item {

public:

    MageHelmetLower() : Item("Acolyte’s Hood", "+15 Attack"){};
    void use() override;
};

class MageHelmetHigher : public Item {

public:

    MageHelmetHigher() : Item("Flamesilk Hood", "+30 Attack"){};
    void use() override;
};

class MagePantsLower : public Item {

public:

    MagePantsLower() : Item("Acolyte’s Legwraps", "+20 Attack"){};
    void use() override;
};

class MagePantsHigher : public Item {

public:

    MagePantsHigher() : Item("Incendiary Legwraps", "+45 Attack"){};
    void use() override;
};