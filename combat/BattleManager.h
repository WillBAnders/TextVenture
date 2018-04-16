# pragma once

#include <vector>

#include "Battler.h"

class BattleManager {

    public:

        BattleManager(Battler player, Battler opponent) : player(player), opponent(opponent) {};
        void start();

    private:

        Battler player;
        Battler opponent;

};