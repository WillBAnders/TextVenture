#include "TradersPass.h"

#include "../quests/Quests.h"
#include "../../Util.h"
#include "../entities/WildBoar.h"

void TradersPass::onEnter(ChangeLocationEvent &event) {
    Location::onEnter(event);
    if (Quests::intoTheWild()->isActive()) {
        Util::print("Oh no, there are wild boars here!", 50);
        Game::get().startBattle(new WildBoar());
        Util::print("That was a close one!", 50);
    }
}