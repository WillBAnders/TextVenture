#pragma once

#include <map>
#include <string>

/**
 * The context of a command during processing. Because the type of an argument is unknown, they are stored as void
 * pointers. For convenience (and example), getString and getInt have been included.
 */
class CommandContext {

    public:

        void *getArg(const std::string &key) const;
        bool hasArg(const std::string &key) const;
        void putArg(const std::string &key, void *value);
        std::string getString(const std::string &key) const;
        int getInt(const std::string &key) const;

    private:

        std::map<std::string, void *> arguments = std::map<std::string, void *>();

};