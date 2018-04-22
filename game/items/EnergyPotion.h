#pragma once

#include "../../data/inventory/Item.h"

class EnergyPotion : public Item {

public:

    EnergyPotion() : Item("Energy Potion", "Regenerates 50% of max energy instantly", Type::CONSUMABLE, Stats(0,0,0,0)) {};
    void use();

};

