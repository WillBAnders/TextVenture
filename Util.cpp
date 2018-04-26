#include "Util.h"
#include "command/registry/Mapping.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <thread>

void Util::sleep(long milliseconds) {
    struct timespec spec{};
    spec.tv_sec = milliseconds / 1000;
    spec.tv_nsec = milliseconds % 1000 * 1000000;
    nanosleep(&spec, nullptr);
}

void Util::print(const std::string &message) { //Prints a message to console
    std::cout << message << std::endl;
}

bool Util::getBool(const std::string &prompt) {
    std::string string = lowercase(getString(prompt));
    if (string == "yes" || string == "y") {
        return true;
    } else if (string == "no" || string == "n") {
        return false;
    }
    print("Please enter 'yes' or 'no'.");
    getBool(prompt);
}

std::string Util::getString(const std::string &prompt) { //Gets a string from the command line with a prompt
    std::cout << prompt;
    std::string string;
    getline(std::cin, string);
    std::cout << std::endl;
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