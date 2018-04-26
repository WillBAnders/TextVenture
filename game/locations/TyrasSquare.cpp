#include "TyrasSquare.h"

#include "../../Util.h"
#include "../quests/Quests.h"
#include "Locations.h"

void TyrasSquare::onEnter(ChangeLocationEvent &event) {
    Location::onEnter(event);
    if (!Quests::intoTheWild()->isOffered()) {
        Util::print("Mysterious Voice: Hey kid, over here!", 50);
        Util::print("Mysterious Voice: North of you, in the guardhouse.", 50);
        Util::print("Mysterious Voice: Kid, you coming?", 50);
        Util::print("Mysterious Voice: Do you not know how to move or something? Enter 'move north' to go to my location.", 50);
    }
}

void TyrasSquare::onLeave(ChangeLocationEvent &event) {
    if (!Quests::intoTheWild()->isOffered() && event.getNextLoc() != Locations::northGuardhouse()) {
        event.setCanceled(true);
        Util::print("Mysterious Voice: No, not that way! North, you crooked-nosed knave!", 50);
    }
}