#pragma once

#include "../../data/inventory/Item.h"


class MageStaffBooksHigher : public Item {

public:

    MageStaffBooksHigher() : Item("Infernal Greatstaff & Wildfire Orb", "+75 Attack, +20 Energy, +75 Health", Type::WEAPON, Stats(75,20,75,0)){};
};
