# pragma once

#include <map>
#include <string>
#include <vector>

#include "Battler.h"
#include "../data/entity/Player.h"
#include "../command/registry/CommandManager.h"

class BattleManager {

    public:

        BattleManager(Player *player, CommandManager commands) : player(player), commands(commands) {};
        void battle(std::vector<Battler *> opponents);

    private:

        Player *player;
        CommandManager commands;

};