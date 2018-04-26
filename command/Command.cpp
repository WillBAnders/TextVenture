#include "Command.h"

#include "../Util.h"

const std::string Command::getUsage() const {
    return usage;
}

const CommandElement *Command::getElement() const {
    return element;
}

void Command::print() const {
    Util::print(getName() + (getUsage().empty() ? ":" : " (" + getUsage() + "):"));
}