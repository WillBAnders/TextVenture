#include "Util.h"
#include "command/registry/Mapping.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <thread>

void Util::sleep(long milliseconds) { //Sleeps for a number of milliseconds
    struct timespec spec{};
    spec.tv_sec = milliseconds / 1000;
    spec.tv_nsec = milliseconds % 1000 * 1000000;
    nanosleep(&spec, nullptr);
}

void Util::print(const std::string &message) { //Prints a message to console
    std::cout << message << std::endl;
}

void Util::print(const std::string &message, long delay) {
    sleep(delay);
    print(message);
}

bool Util::getBool(const std::string &prompt) { //Gets a boolean value from console
    std::string string = lowercase(getString(prompt));
    if (string == "yes" || string == "y") {
        return true;
    } else if (string == "no" || string == "n") {
        return false;
    }
    print("Please enter 'yes' or 'no'.");
    getBool(prompt);
}

int Util::getInt(const std::string &prompt) { //Gets an integer value from console
    int num;
    while (true) {
        std::cout << prompt;
        std::cin >> num;
        if (std::cin.fail()) { //Invalid input - reset cin
            print("Input was not an integer.");
            std::cin.clear();
            std::cin.ignore(1000000, '\n'); //Ignore any input and move to the next line.
        } else {
            return num;
        }
    }
}

std::string Util::getString(const std::string &prompt) { //Gets a string from the command line with a prompt
    std::cout << prompt;
    std::string string;
    getline(std::cin, string);
    std::cout << std::endl;
    return string;
}

int Util::getSelection(const std::vector<std::string> &selections) {
    for (int i = 0; i < selections.size(); i++) {
        print(std::to_string(i + 1) + ": " + selections[i]);
    }
    int selection = getInt("Enter a selection:");
    if (selection >= 1 && selection <= selections.size()) {
        return selection;
    }
    print("Please enter a selection between 1 and " + std::to_string(selections.size() + 1));
    return getSelection(selections);
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