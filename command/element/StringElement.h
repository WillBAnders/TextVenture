#pragma once

#include "CommandElement.h"

class StringElement : public CommandElement {

    public:

        explicit StringElement(std::string name) : StringElement(std::move(name), false) {};
        StringElement(std::string name, const bool remaining) : CommandElement(std::move(name)), remaining(remaining) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        const bool remaining;

};