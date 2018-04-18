#pragma once

#include <utility>

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"

class Player : Battler {

    public:

        Player(int max_health, int max_energy) : Battler(max_health, max_energy) {};
        Location *getLocation() const;
        void setLocation(Location *location);
        Inventory &getInventory();

    private:

        Location *location = nullptr;
        Inventory inventory = Inventory();

};