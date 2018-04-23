#include "Util.h"
#include "command/registry/Mapping.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <thread>

void Util::print(const std::string &message) {
    std::cout << message << std::endl;
}

std::string Util::getString(const std::string &prompt) { //Gets a string from the commandline with a prompt
    if (!prompt.empty()) {
        print(prompt);
    }
    std::string string;
    getline(std::cin, string);
    return string;
}

std::string Util::lowercase(const std::string &string) { //Returns a new string that is in lowercase.
    std::string copy = string;
    std::transform(copy.begin(), copy.end(), copy.begin(), ::tolower);
    return copy;
}

// Never got this one working :(
/*template<typename T>
T *Util::getEntry(const std::map<std::string, T *> &map, const std::string &key) {
    std::string lower = lowercase(key);
    return map.count(lower) > 0 ? map.at(lower) : nullptr;
}*/