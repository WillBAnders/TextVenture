#pragma once

#include <utility>
#include <vector>

#include "../../combat/Battler.h"
#include "../../world/Location.h"
#include "../inventory/Inventory.h"
#include "../inventory/Equipment.h"
#include "../../combat/Move.h"
#include "Entity.h"

/**
 * The player of the game.
 */
class Player : public Entity, public Battler {

    public:

        explicit Player(std::string name) : Entity(std::move(name), "A scrub"), Battler(Stats(100, 20, 10, 5, 10)) {};
        Inventory &getInventory();
        const std::map<std::string, Move *> &getMoves() const;
        void setLocation(Location *location);
        void attack(Battler *opponent) override;
        void update();

    private:

        Stats base_stats = getStats();
        Inventory inventory = Inventory();
        std::map<std::string, Move *> moves = std::map<std::string, Move *>();

};