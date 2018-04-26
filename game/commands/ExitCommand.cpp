#include "ExitCommand.h"

#include "../../Util.h"

void ExitCommand::process(CommandContext ctx) const throw(CommandException) {
    if (Util::getBool("Do you really wish to exit the game? (yes/no):")) {
        Util::print("Goodbye!");
        exit(0);
    }
}