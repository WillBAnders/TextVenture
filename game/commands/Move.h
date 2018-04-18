#pragma once

#include "../../command/Command.h"
#include "../../command/CommandException.h"

class Move : public Command {

    public:

        Move() : Command("Move", "<direction>", {}) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};