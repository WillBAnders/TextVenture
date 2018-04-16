#pragma once

#include "Objective.h"
#include "../Quest.h"

class QuestObjective : public Objective {

    public:

        QuestObjective(std::string description, Quest quest) : Objective(std::move(description)), quest(std::move(quest)) {};
        void check() override;

    private:

        Quest quest;

};