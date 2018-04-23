#pragma once

#include "../../command/Command.h"
#include "../../command/CommandException.h"
#include "elements/Elements.h"
#include "elements/DirectionElement.h"

class MoveCommand : public Command {

    public:

        MoveCommand() : Command("Move", "Moves in a direction.", "<direction>", DirectionElement::get()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};