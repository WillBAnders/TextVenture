#include <iostream>
#include <string>
#include <algorithm>

std::string locations[2] = {"Town", "Wilderness"};
std::string town[3] = {"Square", "Market", "Gate"};

class Player {
    
    public:
        std::string location;
        std::string sublocation;

        Player();
        void changeLocation(std::string move);
};

Player::Player() {
    
    this->location = "Town";
    this->sublocation = "Square";
}

void Player::changeLocation(std::string move) {

    std::cout << "Move to: ";
    std::cin >> move;

    bool found = false;
    
    if (this->location == "Town") {
        
        for (int i = 0; i < sizeof(town)/sizeof(int); i++) {
            if (town[i] == move) {
                found = true;
            }
        }
    }

    if (found == true) {
        
        this->sublocation = move;
    } else {
        std::cout << "Invalid location." << std::endl;
    }
}
