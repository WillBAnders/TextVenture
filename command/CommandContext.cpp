#include "CommandContext.h"

void *CommandContext::getArg(std::string key) const {
    return arguments.at(key);
}

bool CommandContext::hasArg(std::string key) const {
    return arguments.count(key) > 0;
}

void CommandContext::putArg(std::string key, void *value) {
    arguments[key] = value;
}