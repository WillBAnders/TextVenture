#include "VillageGuard.h"

#include "../../Util.h"
#include "../Game.h"

VillageGuard::VillageGuard() : NPC("Norrian Chandler", "Village guard") {
    location = Game::get().getWorld().getLocation("Tyras Square");
}

void VillageGuard::interact() {
    Util::print("Hello there!");
}