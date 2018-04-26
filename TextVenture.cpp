#include <iostream>
#include "TextVenture.h"

#include "test/Test.h"
#include "Util.h"

int main() {
    Util::print(R"(  _______        ___      __        _                  )");
    Util::print(R"( |__   __|      | \ \    / /       | |                 )");
    Util::print(R"(    | | _____  _| |\ \  / /__ _ __ | |_ _   _ _ __ ___ )");
    Util::print(R"(    | |/ _ \ \/ / __\ \/ / _ \ '_ \| __| | | | '__/ _ \)");
    Util::print(R"(    | |  __/>  <| |_ \  /  __/ | | | |_| |_| | | |  __/)");
    Util::print(R"(    |_|\___/_/\_\\__| \/ \___|_| |_|\__|\__,_|_|  \___|)");
    Util::print("");
    Game::get().start();
}