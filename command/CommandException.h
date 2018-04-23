# pragma once

#include <exception>
#include <string>

/**
 * An exception thrown during the retrieving, parsing, or processing of a command.
 */
class CommandException : std::exception {

    public:

        explicit CommandException(std::string error) : CommandException(std::move(error), "") {};
        CommandException(std::string error, std::string usage) : error(std::move(error)), usage(std::move(usage)) {};
        const char *what() const noexcept override;

    private:

        const std::string error;
        const std::string usage;

};