#include <iostream>
#include <string>

class Area {

    public:
        std::string name;
        Area(std::string name);
};

class Location {

    public:
        std::string name;
        Area *area;

        Location(std::string name, Area *area);
};

Area::Area(std::string name) {
    this->name = name;
}

Location::Location(std::string name, Area *area) {
    this->name = name;
    this->area = area;
}



