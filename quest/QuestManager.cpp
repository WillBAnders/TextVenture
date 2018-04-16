#include "QuestManager.h"

#include <algorithm>

Quest *QuestManager::getQuest(std::string name) const {
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    return quests.count(name) > 0 ? quests.at(name) : nullptr;
}

void QuestManager::addQuest(Quest *quest) {
    std::string name = quest->getName();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    quests[name] = quest;
}

void QuestManager::check() {
    for (auto quest : quests) {
        quest.second->check();
    }
}