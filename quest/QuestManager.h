#pragma once

#include <map>

#include "Quest.h"

/**
 * The manager for all quests, which handles registration, retrieval, and updates.
 */
class QuestManager {

    public:

        Quest *getQuest(const std::string &name) const;
        void addQuest(Quest *quest);
        void update() const;

    private:

        std::map<std::string, Quest *> quests;

};