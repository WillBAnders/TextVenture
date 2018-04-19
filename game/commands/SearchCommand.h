#pragma once

#include "../../command/Command.h"
#include "Elements.h"

class SearchCommand : public Command {

    public:

        SearchCommand() : Command("search", "", Elements::empty()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};