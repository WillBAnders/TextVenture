#include "Compass.h"

std::map<std::string, void *> Compass::getDirections() {
    static std::map<std::string, void *> DIRECTIONS = {
            {"north", new Direction(NORTH)},
            {"northeast", new Direction(NORTHEAST)},
            {"east", new Direction(EAST)},
            {"southeast", new Direction(SOUTHEAST)},
            {"south", new Direction(SOUTH)},
            {"southwest", new Direction(SOUTHWEST)},
            {"west", new Direction(WEST)},
            {"northwest", new Direction(NORTHWEST)}
    };
    return DIRECTIONS;
}

std::string Compass::getName(Direction direction) {
    static std::string names[] = {"north", "northeast", "east", "southeast", "south", "southwest", "west", "northwest"};
    return names[direction];
}

Compass::Direction Compass::getOpposite(Direction direction) {
    return (Direction) ((direction + 4) % 8);
}