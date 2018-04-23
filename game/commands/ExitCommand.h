#pragma once

#include "../../command/Command.h"
#include "elements/Elements.h"

class ExitCommand : public Command {

    public:

        ExitCommand() : Command("Exit", "Exits the game. This command must be confirmed.", "confirm", {Elements::optional(Elements::string("confirm", true), nullptr)}) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};