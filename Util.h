#pragma once

#include <map>
#include <vector>

/**
 * A class containing a variety of utility functions
 */
class Util {

    public:

        static void sleep(long milliseconds);
        static void print(const std::string &message);
        static void print(const std::string &message, long delay);
        static bool getBool(const std::string &prompt);
        static int getInt(const std::string &prompt);
        static std::string getString(const std::string &prompt);
        static int getSelection(const std::vector<std::string> &selections);
        static std::string lowercase(const std::string &string);
        //template <typename T> static T *getEntry(const std::map<std::string, T *> &map, const std::string &key);

};
