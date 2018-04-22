#pragma once

#include "../../data/inventory/Item.h"

class MagePantsLower : public Item {

public:

    MagePantsLower() : Item("Acolyte’s Legwraps", "+20 Attack", Type::ARMOR, Stats(0,0,20,0)){};
};