#pragma once


#include "../../data/inventory/Item.h"

class HealthPotion : public Item {

    public:

        HealthPotion() : Item("Health Potion", "Heals 20hp") {};
        void use() override;

};