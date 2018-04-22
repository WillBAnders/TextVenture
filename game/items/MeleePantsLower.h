#pragma once

#include "../../data/inventory/Item.h"



class MeleePantsLower : public Item {

public:

    MeleePantsLower() : Item("Chainmail Leggings", "+25 Health", Type::ARMOR, Stats(25,0,0,0)){};
};