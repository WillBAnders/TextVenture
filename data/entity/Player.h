#pragma once

#include <utility>

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"

class Player : public Battler {

    public:

        Player(Stats stats) : Battler(stats) {};
        Location *getLocation() const;
        void setLocation(Location *location);
        Inventory &getInventory();

    private:

        Location *location = nullptr;
        Inventory inventory = Inventory();

};