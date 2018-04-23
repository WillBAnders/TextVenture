#pragma once

#include "../../../command/element/CommandElement.h"

class DirectionElement : public CommandElement {

    public:

        static DirectionElement *get();
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    protected:

        DirectionElement() : CommandElement("direction") {};

};