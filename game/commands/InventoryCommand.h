#pragma once

#include "../../command/Command.h"
#include "elements/Elements.h"

class InventoryCommand : public Command {

    public:

        InventoryCommand() : Command("Inventory", "Shows your inventory.", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};