#pragma once

#include "CommandContext.h"
#include "element/CommandElement.h"
#include "CommandException.h"
#include "../data/Describable.h"
#include "../data/Printable.h"

/**
 * A command that can be processed. The CommandElement is responsible for parsing any input arguments and adding them
 * into the CommandContext for the process method.
 */
class Command : public Nameable, public Describable, public Printable {

    public:

        Command(std::string name, std::string description, std::string usage, CommandElement *element) : Nameable(std::move(name)), Describable(std::move(description)), usage(std::move(usage)), element(element) {};
        const std::string getUsage() const;
        const CommandElement *getElement() const;
        virtual void process(CommandContext ctx) const throw(CommandException) = 0;
        void print() const override;

    private:

        std::string usage;
        const CommandElement *element;

};