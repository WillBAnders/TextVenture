#include "Drawbridge.h"
#include "../../Util.h"

void Drawbridge::onEnter(ChangeLocationEvent &event) {
    if (Game::get().getPlayer().getEquipment().getWeapon() == nullptr) {
        Util::print("Guard: Hey kid, I can't let you out of the village without a weapon!", 50);
        Util::print("Guard: Oh, it looks you have a sword already! Well, equip it for god's sake!", 50);
        Util::print("Guard: Don't forget, you can use the 'equip' command to set your weapon.", 50);
        event.setCanceled(true);
        return;
    }
    Location::onEnter(event);
}