#pragma once

#include <map>

#include "Quest.h"

class QuestManager {

    public:

        Quest *getQuest(std::string name) const;
        void addQuest(Quest *quest);
        void check();

    private:

        std::map<std::string, Quest *> quests;
};