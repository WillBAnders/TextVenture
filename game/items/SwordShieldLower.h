#pragma once

#include "../../data/inventory/Item.h"


class SwordShieldLower : public Item {

public:

    SwordShieldLower() : Item("Blunt Steel Sword & Iron Shield", "+40 Health, +25 Attack", Type::WEAPON, Stats(40,0,25,0)) {};
};
