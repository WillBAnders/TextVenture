#pragma once

#include "../../data/inventory/Item.h"
#include "HealthPotion.h"
#include "EnergyPotion.h"

/**
 * Factory methods that return static instances of all items
 */
class Items {

    public:

        static HealthPotion* healthPotion();
        static EnergyPotion* energyPotion();
        static Item* guardsmanSet();
        static Item* rangerSet();
        static Item* pheonixSet();

};