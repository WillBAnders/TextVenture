#pragma once

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"

class Player : Battler {

    public:

        Player(int max_health, int max_energy) : Battler(max_health, max_energy) {};
        Location &getLocation() const;
        void setLocation(Location &location);

    private:

        Location location = nullptr; //TODO: Initialize
        Inventory inventory = Inventory();

};