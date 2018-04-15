#include <iostream>
#include <string>
#include <map>
#include "player.h"
//#include "Map.h"

Area *town = new Area("Town");
Area *wilderness = new Area("Wilderness");
Area *castle = new Area("Castle");

Square *square = new Square(town);
Market *market = new Market(town);
//Tavern *tavern = new Tarven(town);
Wilderness *wildernessL = new Wilderness(wilderness);
ThroneRoom *throneRoom = new ThroneRoom(castle);
MainRoom *mainRoom = new MainRoom(castle);

//int main() {
    
    square->declareNeighbors(market, wildernessL, mainRoom, throneRoom);
    Player *player = new Player(square);
    //player->changeLocation(square);
    //player->changeLocation(market);
    std::cout << player->getLocation()->getNeighbors()[NORTH]->getName() << std::endl; 
    std::cout << square->getMessage() << std::endl;
    std::cout << player->getLocation()->getName() << std::endl;

    player->changeLocation(throneRoom);
    std::cout << player->getLocation()->getArea()->getName() << std::endl;
    //std::cout << square->message;

    delete player;
    delete square;
    delete market;
    delete wildernessL;
    delete wilderness;
    delete town;
    
    return 0;
}
