#include "CommandContext.h"

void *CommandContext::getArg(const std::string &key) const {
    return arguments.at(key);
}

bool CommandContext::hasArg(const std::string &key) const {
    return arguments.count(key) > 0;
}

void CommandContext::putArg(const std::string &key, void *value) {
    arguments[key] = value;
}

std::string CommandContext::getString(const std::string &key) const {
    return *static_cast<std::string *>(getArg(key));
}

int CommandContext::getInt(const std::string &key) const {
    return *static_cast<int *>(getArg(key));
}