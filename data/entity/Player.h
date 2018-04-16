#pragma once

#include <utility>

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"

class Player : Battler {

    public:

        Player(int max_health, int max_energy, Location location) : Battler(max_health, max_energy), location(std::move(location)) {};
        Location getLocation() const;
        void setLocation(Location &location);

    private:

        Location location;
        Inventory inventory = Inventory();

};