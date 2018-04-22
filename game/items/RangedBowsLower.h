#pragma once

#include "../../data/inventory/Item.h"

class RangedBowsLower : public Item {

public:

    RangedBowsLower() : Item("Wooden Bow", "+25 Attack, +10 Energy, +35 Health", Type::WEAPON, Stats(35,10,25,0)){};
};
