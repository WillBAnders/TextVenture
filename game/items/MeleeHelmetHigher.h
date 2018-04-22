#pragma once

#include "../../data/inventory/Item.h"

class MeleeHelmetHigher : public Item {

public:

    MeleeHelmetHigher() : Item("Dreadplate Helmet", "+25 Health", Type::ARMOR, Stats(25,0,0,0)){};
};