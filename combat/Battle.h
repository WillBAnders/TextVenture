# pragma once

#include <map>
#include <string>
#include <vector>

#include "Battler.h"
#include "../data/entity/Player.h"
#include "../command/registry/CommandManager.h"
#include "../data/entity/Enemy.h"

/**
 * The battle instance between a Player and an Enemy. While this is currently only a wrapper, it will house global
 * variables, auras, and other turn-persistent content that lasts throughout the battle.
 */
class Battle {

    public:

        Battle(Player *player, Enemy *enemy) : player(player), enemy(enemy) {};
        Player *getPlayer() const;
        Enemy *getEnemy() const;
        void start();

    private:

        Player *player;
        Enemy *enemy;

};