# pragma once

#include "Mapping.h"
#include "../CommandException.h"

class CommandManager {

    public:

        void addCommand(Command *command, const std::string &alias);
        void addCommand(Command *command, std::vector<std::string> aliases);
        void process(std::string input) const throw(CommandException);

    private:

        Mapping *ROOT = new Mapping("ROOT");

};