#pragma once


#include "../../data/inventory/Item.h"

class HealthPotion : public Item {

    public:

        HealthPotion() : Item("Health Potion", "Heals 20hp") {};
        void use() override;

};

class EnergyPotion : public Item {

public:

    EnergyPotion() : Item("Energy Potion", "Regenerates 50% of max energy instantly") {};
    void use() override;

};