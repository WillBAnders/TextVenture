#pragma once

#include "../../command/Command.h"

class MoveElement : public CommandElement {

    public:

        MoveElement() : CommandElement("move") {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

};