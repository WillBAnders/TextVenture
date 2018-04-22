#pragma once

#include "../../data/inventory/Item.h"



class MeleeChestHigher : public Item {

public:

    MeleeChestHigher() : Item("Gleaming Chestplate", "+75 Health", Type::ARMOR, Stats(75,0,0,0)){};
};
