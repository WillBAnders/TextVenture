#pragma once

#include <map>
#include <string>

class CommandContext {

    public:

        void *getArg(std::string key) const;
        bool hasArg(std::string key) const;
        void putArg(std::string key, void *value);

    private:

        std::map<std::string, void *> arguments = std::map<std::string, void *>();

};