#include <iostream>
#include <string>
#include "Player.h"

int main() {
    
    Player *player = new Player();
    player->changeLocation("Market");
    std::cout << player->location << ": " << player->sublocation << std::endl;

    delete player;
    
    return 0;
}
