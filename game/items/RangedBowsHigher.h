#pragma once

#include "../../data/inventory/Item.h"




class RangedBowsHigher : public Item {

public:

    RangedBowsHigher() : Item("Heartseeker Bow", "+75 Attack, +20 Energy, +75 Health", Type::WEAPON, Stats(75,20,75,0)){};
};