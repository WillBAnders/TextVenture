#pragma once

#include <utility>

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"
#include "../inventory/Equipment.h"

class Player : public Battler {

    public:

        explicit Player(Stats base_stats) : Battler(base_stats), base_stats(base_stats) {};
        Inventory &getInventory();
        Equipment &getEquipment();
        Location *getLocation() const;
        void setLocation(Location *location);
        void update();

    private:

        Stats base_stats;
        Inventory inventory = Inventory();
        Equipment equipment = Equipment();
        Location *location = nullptr;

};