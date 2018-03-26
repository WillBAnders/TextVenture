#include <iostream>
#include <string>
#include <cstdlib>
#include "map.h"

int main() {
    
    Map *wMap = new Map();
    wMap->printMap();
    delete wMap;
    return 0;
}
