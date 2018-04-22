#pragma once

#include <string>

// Main regions of the game's world
class Area {

    public:

        explicit Area(std::string name) : name(std::move(name)) {};
        std::string getName() const;

    private:

        std::string name;

};