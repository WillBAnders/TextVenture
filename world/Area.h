#pragma once

#include <string>

class Area {

    public:

        explicit Area(std::string name) : name(std::move(name)) {};
        std::string getName() const;

    private:

        std::string name;

};