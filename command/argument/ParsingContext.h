#pragma once

#include <string>
#include <vector>

#include "ParseException.h"

class ParsingContext {

    public:

        explicit ParsingContext(std::string command);
        bool hasNext() const;
        std::string next() throw(ParseException);
        std::string peek() const throw(ParseException);
        int getState() const;
        void setState(int index);

    private:

        std::vector<std::string> arguments = std::vector<std::string>();
        int index = -1; //The current state, representing the index of the last argument

};