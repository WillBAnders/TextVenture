#pragma once

#include "../../data/inventory/Item.h"


class MageHelmetLower : public Item {

public:

    MageHelmetLower() : Item("Acolyte’s Hood", "+15 Attack", Type::ARMOR, Stats(0,0,15,0)){};
};
