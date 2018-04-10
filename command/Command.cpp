#include "Command.h"

std::string Command::getName() const {
    return name;
}

std::string Command::getUsage() const {
    return usage;
}

const CommandElement * Command::getElement() const {
    return element;
}