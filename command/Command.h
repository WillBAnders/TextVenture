#pragma once

#include "CommandContext.h"
#include "element/CommandElement.h"

class Command {

    public:

        Command(std::string name, std::string usage, CommandElement * element) : name(std::move(name)), usage(std::move(usage)), element(element) {};
        std::string getName() const;
        std::string getUsage() const;
        const CommandElement * getElement() const;
        virtual void process(CommandContext ctx) const = 0;

    private:

        const std::string name;
        const std::string usage;
        const CommandElement * element;

};