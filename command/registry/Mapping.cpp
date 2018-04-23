#include "Mapping.h"

#include "../../Util.h"

Mapping *Mapping::getChild(std::string name) const {
    std::string lower = Util::lowercase(name);
    return children.count(lower) > 0 ? children.at(lower) : nullptr;
}