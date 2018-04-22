#pragma once

#include "../../data/inventory/Item.h"

class MageChestLower : public Item {

public:

    MageChestLower() : Item("Acolyte’s Robes", "+25 Attack", Type::ARMOR, Stats(0,0,25,0)){};
};