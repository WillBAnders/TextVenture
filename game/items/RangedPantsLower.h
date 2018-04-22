#pragma once

#include "../../data/inventory/Item.h"


class RangedPantsLower : public Item {

public:

    RangedPantsLower() : Item("Hardened Leather Chaps", "+10 Attack, +15 Health", Type::ARMOR, Stats(15,0,10,0)){};
};