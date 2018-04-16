#include "map.h"
#include "inventory.h"
class Player {

    private:
        Location *location;
        inventory player;

    public:
        //Location *location;
        Player(Location *location);
        ~Player();
        void changeLocation(Location *location);
        Location* getLocation() {
            return location;
        }
};

Player::Player(Location *location) {
    this->location = location;
    //std::cout << location->name;
}

Player::~Player() {
    //delete location;
}

void Player::changeLocation(Location *location) {
    this->location = location;
}
