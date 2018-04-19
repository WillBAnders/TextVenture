#include "Elements.h"
#include "../../world/Compass.h"

StringElement *Elements::string(std::string name) {
    return new StringElement(std::move(name));
}

IntElement *Elements::integer(std::string name, int min, int max) {
    return new IntElement(std::move(name), min, max);
}

ChoicesElement *Elements::choices(std::string name, std::map<std::string, void *> map) {
    return new ChoicesElement(std::move(name), std::move(map));
}

SequentialElement *Elements::sequential(std::vector<CommandElement *> elements) {
    return new SequentialElement(std::move(elements));
}

SequentialElement *Elements::empty() {
    static SequentialElement *empty = sequential({});
    return empty;
}

IntElement *Elements::quantity() {
    static IntElement *quantity = integer("quantity", 1, INT_MAX);
    return quantity;
}

ChoicesElement *Elements::direction() {
    static ChoicesElement *direction = choices("direction", Compass::getDirections());
    return direction;
}