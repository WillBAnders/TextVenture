#pragma once

#include "CommandElement.h"

/**
 * A CommandElement that is optional. Parsing is delegated to another command element, where any ParseException throw is
 * consumed. If the default value is not a null pointer, it is added into the CommandContext instead.
 */
class OptionalElement : public CommandElement {

    public:

        OptionalElement(CommandElement *delegate, void *def) : CommandElement(delegate->getName()), delegate(delegate), def(def) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        CommandElement *delegate;
        void *def;

};