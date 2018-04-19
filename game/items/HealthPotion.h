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

class DamagePotion : public Item {

public:

    DamagePotion() : Item("Elixir of Might", "Increases damage done by 10% for the duration of the fight") {};
    void use() override;

};

class SwordShield : public Item {

public:

    SwordShield() : Item("Blunt Steel Sword & Iron Shield", "+40 Health and +25 Attack") {};
    void use() override;

};

class UpperSwordShield : public Item {

public:

    UpperSwordShield() : Item("The Unstoppable Force & Aegis of the Kings", "+100 Health and +75 Attack") {};
    void use() override;

};

class Chestlower : public Item {

public:

    Chestlower() : Item("Chainmail vest", "+25 Health") {};
    void use() override;

};



