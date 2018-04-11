#include <iostream>
#include <string>
#include "Player.h"
//#include "Map.h"

Square *square = new Square();
Market *market = new Market();
Wilderness *wilderness = new Wilderness();

int main() {
    
    Player *player = new Player();
    player->changeLocation(square);
    //player->changeLocation(market);
    std::cout << square->name;
    std::cout << player->location->name << std::endl;
    //std::cout << square->message;

    delete player;
    delete square;
    delete market;
    delete wilderness;
    
    return 0;
}
