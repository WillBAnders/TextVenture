# pragma once

#include <utility>

#include "CommandElement.h"

class ChoicesElement : public CommandElement {

    public:

        ChoicesElement(std::string name, std::map<std::string, void *> map) : CommandElement(std::move(name)), map(std::move(map)) {};
        void parse(ParsingContext &args, CommandContext &ctx) const throw(ParseException) override;

    private:

        std::map<std::string, void *> map{};

};

