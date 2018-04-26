#include "IntoTheWild.h"

#include <vector>

#include "objectives/Objectives.h"
#include "../Game.h"

IntoTheWild::IntoTheWild() : Quest("Into the Wild", "Explore the wilderness of Vanguard Forest", false) {
    objectives.push_back(Objectives::location("Explore Vanguard Forest", Game::get().getWorld().getLocation("Traders Pass")));
};