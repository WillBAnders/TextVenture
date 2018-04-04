#pragma once

#include <string>

#include "../argument/ParsingContext.h"
#include "../CommandContext.h"
#include "../argument/ParseException.h"

class CommandElement {

    public:

        explicit CommandElement(std::string name) : name(std::move(name)) {};
        std::string getName() const;
        virtual void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) = 0;

    private:

        const std::string name;

};