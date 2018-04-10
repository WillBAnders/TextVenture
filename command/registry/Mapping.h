# pragma once

#include <string>

#include "../Command.h"

class Mapping {

        friend class CommandManager;

    public:

        explicit Mapping(std::string name) : name(std::move(name)) {};
        Mapping *getChild(std::string name) const;

    private:

        const std::string name;
        std::map<std::string, Mapping *> children = std::map<std::string, Mapping *>();
        Command *command = nullptr;

};