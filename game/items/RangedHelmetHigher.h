#pragma once

#include "../../data/inventory/Item.h"


class RangedHelmetHigher : public Item {

public:

    RangedHelmetHigher() : Item("Dreadleather Helmet", "+15 Attack, +15 Health", Type::ARMOR, Stats(15,0,15,0)){};
};