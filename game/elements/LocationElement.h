#pragma once

#include "../../command/element/CommandElement.h"

class LocationElement : public CommandElement {

    public:

        LocationElement() : CommandElement("location") {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

};