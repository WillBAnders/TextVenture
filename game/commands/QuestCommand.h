#pragma once

#include "../../command/Command.h"
#include "../elements/Elements.h"

class QuestCommand : public Command {

    public:

        QuestCommand() : Command("Quest", "Displays information about a quest.", "<quest>", Elements::quest()) {};
        void process(CommandContext ctx) const throw(CommandException) override;

};