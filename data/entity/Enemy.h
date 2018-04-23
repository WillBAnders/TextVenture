#pragma once

#include "Entity.h"
#include "../../combat/Battler.h"

/**
 * An enemy that can be fought by the player
 */
class Enemy : public Entity, public Battler {

    public:

        Enemy(std::string name, std::string description, Stats stats) : Entity(std::move(name), std::move(description)), Battler(stats) {};

};