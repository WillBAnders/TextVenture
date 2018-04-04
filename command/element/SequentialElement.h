# pragma once

#include "CommandElement.h"

class SequentialElement : public CommandElement {

    public:

        SequentialElement(std::string name, std::vector<CommandElement*> elements) : CommandElement(std::move(name)), elements(std::move(elements)) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        std::vector<CommandElement*> elements;

};