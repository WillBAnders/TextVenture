#include "TextVenture.h"

#include "test/Test.h"

int main() {
    test();
}

Game getGame() {
    static Game game;
    return game;
}