#pragma once

#include "../command/registry/CommandManager.h"
#include "../data/entity/Player.h"
#include "../world/World.h"
#include "../quest/QuestManager.h"
#include "../combat/BattleManager.h"

class Game {

    public:

        Player &getPlayer();
        World &getWorld();
        CommandManager &getCommands();
        QuestManager &getQuests();
        void initialize();
        void start();

    private:

        Player player = Player(Battler::Stats());
        World world = World();
        CommandManager commands = CommandManager();
        QuestManager quests = QuestManager();

};