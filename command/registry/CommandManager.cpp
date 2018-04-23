#include "CommandManager.h"

#include <sstream>
#include <iostream>

#include "../../Util.h"

void CommandManager::addCommand(Command *command, std::initializer_list<std::string> aliases) {
    for (const auto &alias : aliases) {
        std::string str;
        std::stringstream stream(alias);
        Mapping *mapping = ROOT; //Start from the root
        while (stream >> str) { //For each word in the alias
            str = Util::lowercase(str);
            Mapping *child = mapping->getChild(str);
            if (child == nullptr) { //No child exits, so create one
                child = new Mapping(str);
                mapping->children[str] = child;
            }
            mapping = child;
        }
        mapping->command = command; //Assign the command to the mapping
    }
}

void CommandManager::process(std::string input) const throw(CommandException) {
    std::string str;
    std::string argument;
    std::stringstream stream(input);
    Mapping *mapping = ROOT;
    while (stream >> str) { //For each argument
        Mapping *child = mapping->getChild(Util::lowercase(str));
        if (child == nullptr) { //No child, so this is where the arguments start
            argument = str;
            break;
        }
        mapping = child; //Otherwise, update the mapping and continue
    }
    if (mapping->command == nullptr) { //No command was found at this mapping
        throw CommandException("Unknown command '" + str + "'.");
    }
    while (stream >> str) { //Append any remaining arguments
        argument += " " + str;
    }
    CommandContext ctx;
    ParsingContext args(argument);
    try {
        mapping->command->getElement()->parse(args, ctx);
        if (args.hasNext()) { //The CommandElement finished, but there is still a next argument
            throw ParseException("Too many arguments.");
        }
    } catch (ParseException &e) {
        throw CommandException(e.what());
    }
    mapping->command->process(ctx);
}

void CommandManager::print() const {
    print(ROOT, "");
}

void CommandManager::print(Mapping *mapping, const std::string &indent) const {
    for (const auto &child : mapping->children) {
        Util::print(child.first + " " + (child.second->command != nullptr ? child.second->command->getUsage() + " (" + child.second->command->getName() + ")" : ""));
        print(child.second, indent + "| "); //Adds indentation for child commands
    }
}