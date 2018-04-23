#pragma once

#include "Objective.h"
#include "../Quest.h"

/**
 * An objective for the completion of another quest.
 */
class QuestObjective : public Objective {

    public:

        QuestObjective(std::string description, Quest *quest) : Objective(std::move(description)), quest(quest) {};
        void update() override;

    private:

        Quest *quest;

};
