#pragma once

#include "../../data/inventory/Item.h"



class SwordShieldHigher : public Item {

public:

    SwordShieldHigher() : Item("The Unstoppable Force & Aegis of the Kings", "+100 Health, +75 Attack", Type::WEAPON, Stats(100,0,75,0)) {};
};
