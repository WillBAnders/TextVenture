#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class ExitCommand : public Command {

    public:

        ExitCommand() : Command("Exit", "Exits the game.", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};