#pragma once

#include "../../data/inventory/Item.h"



class MagePantsHigher : public Item {

public:

    MagePantsHigher() : Item("Incendiary Legwraps", "+45 Attack", Type::ARMOR, Stats(0,0,45,0)){};
};