#pragma once

#include "../../data/inventory/Item.h"

class GuardsmanSet : public Item {

    public:

        GuardsmanSet() : Item("Guardsman Sword & Shield", "A standard sword and shield used by the guards of Castle Tyrus", Type::WEAPON, Stats(40, 25, 15, 5, 0)) {};

};