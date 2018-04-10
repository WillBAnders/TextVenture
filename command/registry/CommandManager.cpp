#include "CommandManager.h"

#include <sstream>
#include <iostream>

void CommandManager::addCommand(Command &command, std::string alias) {
    std::string str;
    std::stringstream stream(alias);
    Mapping *mapping = ROOT;
    while (stream >> str) {
        Mapping *child = mapping->getChild(str);
        if (child == nullptr) {
            child = new Mapping(str);
            mapping->children[str] = child;
        }
        mapping = child;
    }
    mapping->command = &command;
}

void CommandManager::addCommand(Command &command, std::vector<std::string> aliases) {
    for (const auto &alias : aliases) {
        addCommand(command, alias);
    }
}

void CommandManager::process(std::string input) const throw(CommandException) {
    std::string str;
    std::string argument;
    std::stringstream stream(input);
    Mapping *mapping = ROOT;
    while (stream >> str) {
        Mapping *child = mapping->getChild(str);
        if (child == nullptr) {
            argument = str;
            break;
        }
        mapping = child;
    }
    if (mapping->command == nullptr) {
        throw CommandException("Unknown command: " + input);
    }
    while (stream >> str) {
        argument += " " + str;
    }
    CommandContext ctx;
    ParsingContext args(argument);
    try {
        mapping->command->getElement()->parse(args, ctx);
        if (args.hasNext()) {
            throw ParseException("Too many arguments (" + argument + ")");
        }
    } catch (ParseException &e) {
        throw CommandException(mapping->command->getName(), e.what());
    }
    mapping->command->process(ctx);
}