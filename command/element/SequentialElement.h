# pragma once

#include "CommandElement.h"

/**
 * A CommandElement that parses multiple elements in sequence.
 */
class SequentialElement : public CommandElement {

    public:

        explicit SequentialElement(std::vector<CommandElement*> elements) : CommandElement(""), elements(std::move(elements)) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        std::vector<CommandElement*> elements;

};