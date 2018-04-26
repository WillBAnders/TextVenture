#pragma once

#include <utility>
#include "../command/registry/CommandManager.h"
#include "../data/entity/Player.h"
#include "../world/World.h"
#include "../quest/QuestManager.h"
#include "../combat/Battle.h"

/**
 * The game instance (singleton). This holds the world, commands, quests, and controls the game cycle.
 */
class Game {

    public:

        static Game &get();
        Player &getPlayer();
        World &getWorld();
        CommandManager &getCommands();
        CommandManager &getBattleCommands();
        QuestManager &getQuests();
        Battle &getBattle();
        void initialize();
        void start();
        void startBattle(Enemy *enemy);

    private:

        explicit Game(std::string player_name) : player(Player(std::move(player_name))) {};

        Player player;
        World world = World();
        CommandManager commands = CommandManager();
        CommandManager battle_commands = CommandManager();
        QuestManager quests = QuestManager();
        Battle *battle = nullptr;

};