#pragma once

#include "../../command/element/CommandElement.h"

class DirectionElement : public CommandElement {

    public:

        DirectionElement() : CommandElement("direction") {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

};