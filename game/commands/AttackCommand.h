#pragma once

#include "../../command/Command.h"
#include "elements/Elements.h"
#include "elements/MoveElement.h"

class AttackCommand : public Command {

    public:

        AttackCommand() : Command("Attack", "Attacks an enemy with the give move. ", "<move>", {MoveElement::get()}) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};