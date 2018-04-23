#include "Compass.h"

const std::map<std::string, Compass::Direction> &Compass::getDirections() {
    static const std::map<std::string, Direction> DIRECTIONS = {
            {"north", Direction::NORTH},
            {"northeast", Direction::NORTHEAST},
            {"east", Direction::EAST},
            {"southeast", Direction::SOUTHEAST},
            {"south", Direction::SOUTH},
            {"southwest", Direction::SOUTHWEST},
            {"west", Direction::WEST},
            {"northwest", Direction::NORTHWEST}
    };
    return DIRECTIONS;
}

std::string Compass::getName(Direction direction) {
    static std::string names[] = {"north", "northeast", "east", "southeast", "south", "southwest", "west", "northwest"};
    return names[(int) direction];
}

Compass::Direction Compass::getOpposite(Direction direction) {
    return (Direction) (((int) direction + 4) % 8);
}