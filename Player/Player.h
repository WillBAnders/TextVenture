#include "Map.h"
class Player {

    public:
        Location *location;

        Player();
        ~Player();
        void changeLocation(Location *location);
};

Player::Player() {
    this->location = new Square();
    std::cout << location->name;
}

Player::~Player() {
    //delete location;
}

void Player::changeLocation(Location *location) {
    
    this->location = location;
}
