#include "VillageGuard.h"

#include "../../Util.h"
#include "../Game.h"

VillageGuard::VillageGuard() : NPC("Norrian Chandler", "Village guard") {
    location = Game::get().getWorld().getLocation("Village Gate");
}

void VillageGuard::interact() {
    Util::print("Hello there!");
}