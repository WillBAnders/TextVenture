#pragma once

#include "CommandElement.h"

/**
 * A CommandElement that parses a string value, either as a single string (no spaces) or all remaining arguments.
 */
class StringElement : public CommandElement {

    public:

        StringElement(std::string name, const bool remaining) : CommandElement(std::move(name)), remaining(remaining) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        const bool remaining;

};