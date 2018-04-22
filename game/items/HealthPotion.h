#pragma once


#include "../../data/inventory/Item.h"

class HealthPotion : public Item {

    public:

        HealthPotion() : Item("Health Potion", "Heals 20hp", Type::CONSUMABLE, Stats(0,0,0,0)) {};
        void use();

};
 /*
class EnergyPotion : public Item {

public:

    EnergyPotion() : Item("Energy Potion", "Regenerates 50% of max energy instantly", Type::CONSUMABLE, Stats(0,0,0,0)) {};
    void use();

};

class DamagePotion : public Item {

public:

    DamagePotion() : Item("Elixir of Might", "Increases damage done by 10% for the duration of the fight", Type::CONSUMABLE, Stats(0,0,0,0)) {};
    void use();

};

//******* MELEE WEAPONS AND ARMOR *******

class SwordShieldLower : public Item {

public:

    SwordShieldLower() : Item("Blunt Steel Sword & Iron Shield", "+40 Health, +25 Attack", Type::WEAPON, Stats(40,0,25,0)) {};
};

class SwordShieldHigher : public Item {

public:

    SwordShieldHigher() : Item("The Unstoppable Force & Aegis of the Kings", "+100 Health, +75 Attack", Type::WEAPON, Stats(100,0,75,0)) {};
};

class MeleeChestLower : public Item {

public:

    MeleeChestLower() : Item("Chainmail vest", "+25 Health", Type::ARMOR, Stats(25,0,0,0)) {};
};


class MeleeChestHigher : public Item {

public:

    MeleeChestHigher() : Item("Gleaming Chestplate", "+75 Health", Type::ARMOR, Stats(75,0,0,0)){};
};



class MeleeHelmetLower : public Item {

public:

    MeleeHelmetLower() : Item("Chainmail Cowl", "+10 Health", Type::ARMOR, Stats(10,0,0,0)){};
};



class MeleeHelmetHigher : public Item {

public:

    MeleeHelmetHigher() : Item("Dreadplate Helmet", "+25 Health", Type::ARMOR, Stats(25,0,0,0)){};
};


class MeleePantsLower : public Item {

public:

    MeleePantsLower() : Item("Chainmail Leggings", "+25 Health", Type::ARMOR, Stats(25,0,0,0)){};
};



class MeleePantsHigher : public Item {

public:

    MeleePantsHigher() : Item("Legplates of the Protector", "+50 Health", Type::ARMOR, Stats(50,0,0,0)){};
};


//******* RANGED WEAPONS AND ARMOR *******


class RangedBowsLower : public Item {

public:

    RangedBowsLower() : Item("Wooden Bow", "+25 Attack, +10 Energy, +35 Health", Type::WEAPON, Stats(35,10,25,0)){};
};

class RangedBowsHigher : public Item {

public:

    RangedBowsHigher() : Item("Heartseeker Bow", "+75 Attack, +20 Energy, +75 Health", Type::WEAPON, Stats(75,20,75,0)){};
};


class RangedChestLower : public Item {

public:

    RangedChestLower() : Item("Hardened Leather Tunic", "+10 Attack, +10 Health", Type::ARMOR, Stats(10,0,10,0)){};
};


class RangedChestHigher : public Item {

public:

    RangedChestHigher() : Item("Dragonskin Tunic", "+30 Attack, +20 Health", Type::ARMOR, Stats(20,0,30,0)){};
};


class RangedHelmetLower : public Item {

public:

    RangedHelmetLower() : Item("Hardened Leather Coif", "+5 Attack, +5 Health", Type::ARMOR, Stats(5,0,5,0)){};
};

class RangedHelmetHigher : public Item {

public:

    RangedHelmetHigher() : Item("Dreadleather Helmet", "+15 Attack, +15 Health", Type::ARMOR, Stats(15,0,15,0)){};
};


class RangedPantsLower : public Item {

public:

    RangedPantsLower() : Item("Hardened Leather Chaps", "+10 Attack, +15 Health", Type::ARMOR, Stats(15,0,10,0)){};
};


class RangedPantsHigher : public Item {

public:

    RangedPantsHigher() : Item("Dragonskin Chaps", "+30 Attack, +30 Health", Type::ARMOR, Stats(30,0,30,0)){};
};


//******* MAGE WEAPONS AND ARMOR *******

class MageStaffBooksLower : public Item {

public:

    MageStaffBooksLower() : Item("Wooden Staff & Spellcaster’s Tomb", "+25 Attack, +10 Energy, +35 Health", Type::WEAPON, Stats(35,10,25,0)){};
};


class MageStaffBooksHigher : public Item {

public:

    MageStaffBooksHigher() : Item("Infernal Greatstaff & Wildfire Orb", "+75 Attack, +20 Energy, +75 Health", Type::WEAPON, Stats(75,20,75,0)){};
};


class MageChestLower : public Item {

public:

    MageChestLower() : Item("Acolyte’s Robes", "+25 Attack", Type::ARMOR, Stats(0,0,25,0)){};
};


class MageChestHigher : public Item {

public:

    MageChestHigher() : Item("Incendiary Garb", "+50 Attack", Type::ARMOR, Stats(0,0,50,0)){};
};


class MageHelmetLower : public Item {

public:

    MageHelmetLower() : Item("Acolyte’s Hood", "+15 Attack", Type::ARMOR, Stats(0,0,15,0)){};
};


class MageHelmetHigher : public Item {

public:

    MageHelmetHigher() : Item("Flamesilk Hood", "+30 Attack", Type::ARMOR, Stats(0,0,30,0)){};
};

class MagePantsLower : public Item {

public:

    MagePantsLower() : Item("Acolyte’s Legwraps", "+20 Attack", Type::ARMOR, Stats(0,0,20,0)){};
};

class MagePantsHigher : public Item {

public:

    MagePantsHigher() : Item("Incendiary Legwraps", "+45 Attack", Type::ARMOR, Stats(0,0,45,0)){};
};

  */