#pragma once

#include <string>

class Objective {

    public:

        explicit Objective(std::string description) : description(std::move(description)) {};
        std::string getDescription() const;
        virtual void check() = 0;

    private:

        std::string description;

};