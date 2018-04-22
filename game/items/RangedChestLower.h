#pragma once

#include "../../data/inventory/Item.h"



class RangedChestLower : public Item {

public:

    RangedChestLower() : Item("Hardened Leather Tunic", "+10 Attack, +10 Health", Type::ARMOR, Stats(10,0,10,0)){};
};