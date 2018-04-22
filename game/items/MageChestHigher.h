#pragma once

#include "../../data/inventory/Item.h"

class MageChestHigher : public Item {

public:

    MageChestHigher() : Item("Incendiary Garb", "+50 Attack", Type::ARMOR, Stats(0,0,50,0)){};
};