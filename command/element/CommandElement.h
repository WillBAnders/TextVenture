#pragma once

#include <string>

#include "../argument/ParsingContext.h"
#include "../CommandContext.h"
#include "../argument/ParseException.h"
#include "../../data/Nameable.h"

/**
 * Represents an argument in a command and controls the parsing of it. The element takes in arguments as strings from
 * the ParsingContext, converts them into objects of the proper type, and inserts them into the CommandContext.
 */
class CommandElement : public Nameable {

    public:

        explicit CommandElement(std::string name) : Nameable(std::move(name)) {};
        virtual void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) = 0;

};