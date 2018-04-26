#include "AttackCommand.h"

#include "../Game.h"
#include "../../Util.h"

void AttackCommand::process(CommandContext ctx) const throw(CommandException) {
    Util::print("Command");
    Move *move = static_cast<Move *>(ctx.getArg("move"));
    int health = Game::get().getBattle().getEnemy()->getHealth();
    move->attack(Game::get().getBattle().getPlayer(), Game::get().getBattle().getEnemy());
    Util::print("You attacked with " + move->getName() + " and dealt " + std::to_string(health - Game::get().getBattle().getEnemy()->getHealth()) + " damage! (-" + std::to_string(move->getEnergy()) + " energy)");
}