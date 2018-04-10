# pragma once

#include <exception>
#include <string>

class CommandException : std::exception {

    public:

        explicit CommandException(std::string error) : error(std::move(error)) {};
        CommandException(const std::string &name, const std::string &error) : error("Error processing command " + name + ": " + error) {};
        const char *what() const noexcept override;

    private:

        const std::string error;

};