#include "ParsingContext.h"

#include <sstream>

ParsingContext::ParsingContext(std::string command) {
    std::string str;
    std::stringstream stream(command);
    while (stream >> str) {
        arguments.push_back(str);
    }
}

bool ParsingContext::hasNext() const {
    return arguments.size() > index + 1;
}

std::string ParsingContext::next() throw(ParseException) {
    if (!hasNext()) {
        throw ParseException("Not enough arguments!");
    }
    return arguments[++index];
}

std::string ParsingContext::peek() const throw(ParseException) {
    if (!hasNext()) {
        throw ParseException("Not enough arguments!");
    }
    return arguments[index + 1];
}

int ParsingContext::getState() const {
    return index;
}

void ParsingContext::setState(int index) {
    ParsingContext::index = index;
}