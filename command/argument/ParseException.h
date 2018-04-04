# pragma once

#include <exception>
#include <string>

class ParseException : std::exception {

    public:

        explicit ParseException(const std::string &error) : error("Error parsing arguments: " + error) {};
        ParseException(const std::string &name, const std::string &error) : error("Error parsing argument " + name + ": " + error) {};
        const char *what() const noexcept override;

    private:

        const std::string error;

};