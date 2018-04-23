# pragma once

#include <exception>
#include <string>

/**
 * An exception thrown when parsing a CommandElement.
 */
class ParseException : std::exception {

    public:

        explicit ParseException(std::string error) : error(std::move(error)) {};
        const char *what() const noexcept override;

    private:

        const std::string error;

};