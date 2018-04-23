#include "HelpCommand.h"
#include "../Game.h"
#include "../../Util.h"

void HelpCommand::process(CommandContext ctx) const throw(CommandException) {
    Util::print("Available Commands: ");
    Game::get().getCommands().print();
}