#include "Quests.h"

#include "IntoTheWild.h"

IntoTheWild *Quests::intoTheWild() {
    static auto *intoTheWild = new IntoTheWild();
    return intoTheWild;
}