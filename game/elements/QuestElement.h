#pragma once

#include "../../command/element/CommandElement.h"

class QuestElement : public CommandElement {

    public:

        QuestElement() : CommandElement("quest") {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

};