#include <iostream>
#include <string>
#include <vector>
#include "Map.h"

int main() {
    
    //Area *town = new Area("Town"); 
    //Location *market = new Location("Market", town); // market within town
    //std::cout << market->area->name; // town
    Square *square = new Square();
    std::cout << square->message;
    return 0;
}
