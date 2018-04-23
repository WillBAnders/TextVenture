#pragma once

/**
 * An object that has a description.
 */
class Describable {

    public:

        explicit Describable(std::string description) : description(std::move(description)) {};
        const std::string getDescription() const;

    private:

        const std::string description;

};