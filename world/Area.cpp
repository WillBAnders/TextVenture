#include "Area.h"

#include "../Util.h"

Location *Area::getLocation(std::string name) const {
    std::string lower = Util::lowercase(name);
    return locations.count(lower) > 0 ? locations.at(lower) : nullptr;
}