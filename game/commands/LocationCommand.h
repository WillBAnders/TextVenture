#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class LocationCommand : public Command {

    public:

        LocationCommand() : Command("Location", "Displays information about a location.", "<location>", Elements::optional(Elements::location(), nullptr)) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};