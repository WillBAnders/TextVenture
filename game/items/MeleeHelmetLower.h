#pragma once

#include "../../data/inventory/Item.h"



class MeleeHelmetLower : public Item {

public:

    MeleeHelmetLower() : Item("Chainmail Cowl", "+10 Health", Type::ARMOR, Stats(10,0,0,0)){};
};