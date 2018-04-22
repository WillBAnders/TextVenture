#pragma once

#include "../../data/inventory/Item.h"

class MeleePantsHigher : public Item {

public:

    MeleePantsHigher() : Item("Legplates of the Protector", "+50 Health", Type::ARMOR, Stats(50,0,0,0)){};
};