#include "Move.h"

Move::Type Move::getType() {
    return type;
}

std::string Move::getName() {
    return name;
}

std::string Move::getDescription() {
    return description;
}