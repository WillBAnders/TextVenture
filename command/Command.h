#pragma once

#include "CommandContext.h"
#include "element/CommandElement.h"

class Command {

    public:

        Command(std::string usage, std::vector<CommandElement> elements) : usage(std::move(usage)), elements(std::move(elements)) {};
        std::string getUsage() const;
        virtual void process(CommandContext ctx) const = 0;

    private:

        const std::string usage;
        std::vector<CommandElement> elements;

};