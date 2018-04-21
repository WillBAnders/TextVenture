#include <iostream>
#include "TextVenture.h"

#include "test/Test.h"

int main() {
    //test();
    getGame().initialize();
    getGame().start();
}

Game &getGame() {
    static Game game;
    return game;
}

void print(const std::string &message) {
    std::cout << message << std::endl;
}