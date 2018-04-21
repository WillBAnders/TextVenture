#pragma once

#include "../../command/Command.h"
#include "Elements.h"

class ExitCommand : public Command {

    public:

        ExitCommand() : Command("exit", "confirm", {Elements::string("confirm")}) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};