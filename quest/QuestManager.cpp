#include "QuestManager.h"

#include "../Util.h"

Quest *QuestManager::getQuest(const std::string &name) const {
    std::string lower = Util::lowercase(name);
    return quests.count(lower) > 0 ? quests.at(lower) : nullptr;
}

void QuestManager::addQuest(Quest *quest) {
    quests[Util::lowercase(quest->getName())] = quest;
}

void QuestManager::update() const {
    for (const auto &entry : quests) {
        entry.second->update();
    }
}