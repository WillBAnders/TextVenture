#include "ParseException.h"

const char *ParseException::what() const noexcept {
    return error.c_str();
}