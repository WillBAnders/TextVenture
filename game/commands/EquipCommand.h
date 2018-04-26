#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class EquipCommand : public Command {

    public:

        EquipCommand() : Command("Equip", "Equips an item", "<item>", Elements::item()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};