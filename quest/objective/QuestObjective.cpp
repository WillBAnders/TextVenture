#include "QuestObjective.h"

#include "../../Util.h"

void QuestObjective::update() {
    if (!complete) {
        complete = quest->isComplete();
    }
}

void QuestObjective::print() const {
    Util::print(getDescription() + " (Complete quest " + quest->getName() + ")");
}