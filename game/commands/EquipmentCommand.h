#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class EquipmentCommand : public Command {

    public:

        EquipmentCommand() : Command("Equipment", "Displays information about your equipment ", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};