#pragma once

#include "../../../command/Command.h"

class MoveElement : public CommandElement {

    public:

        static MoveElement *get();
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        MoveElement() : CommandElement("move") {};

};