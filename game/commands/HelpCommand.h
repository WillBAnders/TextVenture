#pragma once

#include "../../command/Command.h"
#include "elements/Elements.h"

class HelpCommand : public Command {

    public:

        HelpCommand() : Command("Help", "Shows the available commands.", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};