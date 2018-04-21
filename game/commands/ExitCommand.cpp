#include "ExitCommand.h"

#include "../../TextVenture.h"

void ExitCommand::process(CommandContext ctx) const throw(CommandException) {
    if (*static_cast<std::string *>(ctx.getArg("confirm")) != "confirm") {
        throw CommandException(getName(), "Please confirm you wish to exit the game.");
    }
    print("Goodbye!");
    exit(0);
}