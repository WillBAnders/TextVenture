#include "Command.h"

const std::string Command::getUsage() const {
    return usage;
}

const CommandElement *Command::getElement() const {
    return element;
}