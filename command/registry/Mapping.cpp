#include "Mapping.h"

#include <iostream>
#include <algorithm>

Mapping *Mapping::getChild(std::string name) const {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return children.count(name) > 0 ? children.at(name) : nullptr;
}