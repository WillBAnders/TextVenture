#include "QuestObjective.h"

void QuestObjective::update() {
    if (!complete) {
        complete = quest->isComplete();
    }
}