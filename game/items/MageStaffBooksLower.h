#pragma once

#include "../../data/inventory/Item.h"


class MageStaffBooksLower : public Item {

public:

    MageStaffBooksLower() : Item("Wooden Staff & Spellcaster’s Tomb", "+25 Attack, +10 Energy, +35 Health", Type::WEAPON, Stats(35,10,25,0)){};
};