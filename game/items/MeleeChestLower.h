#pragma once

#include "../../data/inventory/Item.h"

class MeleeChestLower : public Item {

public:

    MeleeChestLower() : Item("Chainmail vest", "+25 Health", Type::ARMOR, Stats(25,0,0,0)) {};
};