#pragma once

#include "../../data/inventory/Item.h"

class RangedPantsHigher : public Item {

public:

    RangedPantsHigher() : Item("Dragonskin Chaps", "+30 Attack, +30 Health", Type::ARMOR, Stats(30,0,30,0)){};
};