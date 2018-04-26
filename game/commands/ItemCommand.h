#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class ItemCommand : public Command {

    public:

        ItemCommand() : Command("Item", "Displays information about an item. ", "<item>", Elements::string("item", true)) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};