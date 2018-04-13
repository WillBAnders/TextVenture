#include <iostream>
#include <string>
#include "player.h"
//#include "Map.h"

Area *town = new Area("Town");
Area *wilderness = new Area("Wilderness");
Square *square = new Square(town);
Market *market = new Market(town);
Wilderness *wildernessL = new Wilderness(wilderness);

int main() {
    
    Player *player = new Player(square);
    //player->changeLocation(square);
    //player->changeLocation(market);
    std::cout << square->getMessage() << std::endl;
    std::cout << player->getLocation()->getName() << std::endl;

    player->changeLocation(market);
    std::cout << player->getLocation()->getMessage() << std::endl;
    //std::cout << square->message;

    delete player;
    delete square;
    delete market;
    delete wildernessL;
    delete wilderness;
    delete town;
    
    return 0;
}
