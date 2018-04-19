#pragma once

#include "../../command/Command.h"
#include "Elements.h"

class HelpCommand : public Command {

    public:

        HelpCommand() : Command("info", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};