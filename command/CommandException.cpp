#include "CommandException.h"

const char *CommandException::what() const noexcept {
    return error.c_str();
}