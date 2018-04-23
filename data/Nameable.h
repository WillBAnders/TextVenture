#pragma once

#include <string>

/**
 * An object that has a name. It is stipulated that names are unique.
 */
class Nameable {

    public:

        explicit Nameable(std::string name) : name(std::move(name)) {};
        const std::string getName() const;

    private:

        const std::string name;

};