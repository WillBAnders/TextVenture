#pragma once

#include "../../command/Command.h"

class AttackCommand : public Command {

    public:

        AttackCommand() : Command("attack", "<target> <move>", {/*TODO*/}) {};
        void process(CommandContext ctx) const throw(CommandException);

};