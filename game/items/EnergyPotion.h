#pragma once

#include "../../data/inventory/Item.h"
#include "../../data/inventory/Consumeable.h"

class EnergyPotion : public Item, public Consumable {

    public:

        EnergyPotion() : Item("Energy Potion", "A vial of lightning-blue liquid said to restore your health by half of its maximum.", Type::CONSUMABLE, Stats()) {};
        void consume() override;

};

