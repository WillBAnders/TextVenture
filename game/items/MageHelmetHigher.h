#pragma once

#include "../../data/inventory/Item.h"

class MageHelmetHigher : public Item {

public:

    MageHelmetHigher() : Item("Flamesilk Hood", "+30 Attack", Type::ARMOR, Stats(0,0,30,0)){};
};