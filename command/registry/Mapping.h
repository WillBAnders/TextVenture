# pragma once

#include <string>

#include "../Command.h"

/**
 * A Mapping in the command hierarchy that has a name (alias), children, and a possible registered command.
 */
class Mapping : public Nameable {

        friend class CommandManager;

    public:

        explicit Mapping(std::string name) : Nameable(std::move(name)) {};
        Mapping *getChild(std::string name) const;

    private:

        std::map<std::string, Mapping *> children = std::map<std::string, Mapping *>();
        Command *command = nullptr;

};