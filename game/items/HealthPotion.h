#pragma once


#include "../../data/inventory/Item.h"
#include "../../data/inventory/Consumeable.h"

class HealthPotion : public Item, public Consumable {

    public:

        HealthPotion() : Item("Health Potion", "A mysterious drink that restores your health by 40 points.", Type::CONSUMABLE, Stats()) {};
        void consume() override;

};