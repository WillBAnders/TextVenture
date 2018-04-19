#pragma once

#include "../../command/Command.h"
#include "../../command/CommandException.h"
#include "Elements.h"

class MoveCommand : public Command {

    public:

        MoveCommand() : Command("Move", "<direction>", Elements::direction()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};