#pragma once

#include "../../command/element/CommandElement.h"

class ItemElement : public CommandElement {

    public:

        ItemElement() : CommandElement("item") {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

};

