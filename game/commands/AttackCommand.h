#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class AttackCommand : public Command {

    public:

        AttackCommand() : Command("Attack", "Attacks an enemy with a move. ", "<move>", Elements::move()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};