# pragma once

#include "Mapping.h"
#include "../CommandException.h"
#include "../../data/Printable.h"

/**
 * Manages the registration of commands from aliases into mappings that can be retrieved.
 */
class CommandManager : public Printable {

    public:

        void addCommand(Command *command, std::initializer_list<std::string> aliases);
        void process(std::string input) const throw(CommandException);
        void print() const override;

    private:

        void print(Mapping *mapping, const std::string &indent) const;

        Mapping *ROOT = new Mapping("ROOT");

};