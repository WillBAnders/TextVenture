#include "Elements.h"

#include "../../../world/Compass.h"

StringElement *Elements::string(std::string name, bool remaining) {
    return new StringElement(std::move(name), remaining);
}

IntElement *Elements::integer(std::string name, int min, int max) {
    return new IntElement(std::move(name), min, max);
}

OptionalElement *Elements::optional(CommandElement *delegate, void *def) {
    return new OptionalElement(delegate, def);
}

SequentialElement *Elements::sequential(std::vector<CommandElement *> elements) {
    return new SequentialElement(std::move(elements));
}

SequentialElement *Elements::empty() {
    static SequentialElement *empty = sequential({});
    return empty;
}