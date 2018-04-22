#pragma once

#include "../../data/inventory/Item.h"


class RangedHelmetLower : public Item {

public:

    RangedHelmetLower() : Item("Hardened Leather Coif", "+5 Attack, +5 Health", Type::ARMOR, Stats(5,0,5,0)){};
};