#include "ExitCommand.h"

#include "../../Util.h"

void ExitCommand::process(CommandContext ctx) const throw(CommandException) {
    if (!ctx.hasArg("confirm") || ctx.getString("confirm") != "confirm") {
        throw CommandException("Please confirm you wish to exit the game.");
    }
    Util::print("Goodbye!");
    exit(0);
}