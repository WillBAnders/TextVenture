#pragma once

#include <climits>

#include "CommandElement.h"

class IntElement : public CommandElement {

    public:

        explicit IntElement(std::string name) : IntElement(std::move(name), INT_MIN, INT_MAX) {};
        IntElement(std::string name, const int min, const int max) : CommandElement(std::move(name)), min(min), max(max) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        const int min;
        const int max;

};