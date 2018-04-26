#include "NorthGuardhouse.h"

#include "../quests/Quests.h"
#include "../../Util.h"
#include "../items/Items.h"

void NorthGuardhouse::onEnter(ChangeLocationEvent &event) {
    if (!Quests::intoTheWild()->isOffered()) {
        Util::print("Mysterious Voice: There you go kid, now you're getting the hang of it!", 2000);
        Util::print("Mysterious Voice: Name's Norrian, by the way. Norrian Chandler, at your service.", 3000);
        Util::print("Norrian: Truth to be told though, there's a service I could use your help with.", 3000);
        Util::print("Norrian: A buddy of mine, Adrian, is stationed at Windmore Outpost out in Vanguard Forest.", 3000);
        Util::print("Norrian: I haven't heard from him in days.", 4000);
        Util::print("Norrian: I'm stuck here, but do you think you could go check things out? I'd make it worth your time.", 3000);
        if (Util::getSelection({"Sure, I'd be happy to help!", "Wait, I don't have a weapon or anything though..."}) == 1) {
            Util::print("Norrian: Awesome! Here, take this sword and shield - it's one of the extras we have and could save your life.", 3000);
        } else {
            Util::print("Norrian: Hmm... I can give you this one, though I'll need you to bring it back when you're finished.", 3000);
        }
        Game::get().getPlayer().getInventory().addItem(Items::guardsmanSet());
    }
}