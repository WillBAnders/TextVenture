#include "Elements.h"

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
    static auto *empty = sequential({});
    return empty;
}

DirectionElement *Elements::direction() {
    static auto *direction = new DirectionElement();
    return direction;
}

MoveElement *Elements::move() {
    static auto *move = new MoveElement();
    return move;
}

ItemElement *Elements::item() {
    static auto *item = new ItemElement();
    return item;
}

LocationElement *Elements::location() {
    static auto *location = new LocationElement();
    return location;
}

QuestElement *Elements::quest() {
    static auto *quest = new QuestElement();
    return quest;
}