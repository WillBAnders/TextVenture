#include "Quest.h"

std::string Quest::getName() const {
    return name;
}

std::string Quest::getDescription() const {
    return description;
}

bool Quest::isComplete() const {
    return progress == objectives.size();
}

void Quest::offer() {
    // TODO
}

void Quest::start() {
    // TODO
}

void Quest::check() {
    // TODO
}