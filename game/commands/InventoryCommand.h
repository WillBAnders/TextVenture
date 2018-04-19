#pragma once

#include "../../command/Command.h"
#include "Elements.h"

class InventoryCommand : public Command {

    public:

        InventoryCommand() : Command("inventory", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};