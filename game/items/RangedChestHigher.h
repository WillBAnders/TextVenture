#pragma once

#include "../../data/inventory/Item.h"


class RangedChestHigher : public Item {

public:

    RangedChestHigher() : Item("Dragonskin Tunic", "+30 Attack, +20 Health", Type::ARMOR, Stats(20,0,30,0)){};
};