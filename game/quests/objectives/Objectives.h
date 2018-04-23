#pragma once

#include <vector>
#include "../../../quest/objective/CollectObjective.h"
#include "../../../data/entity/Enemy.h"
#include "../../../quest/objective/DefeatObjective.h"
#include "../../../data/Interactable.h"
#include "../../../quest/objective/InteractObjective.h"
#include "../../../quest/objective/LocationObjective.h"
#include "../../../quest/objective/MultiObjective.h"

/**
 * Factory methods for creating Objectives
 */
class Objectives {

    public:

        static CollectObjective *collect(const std::string &description, Item *item, int quantity);
        static DefeatObjective *defeat(const std::string &description, Enemy *enemy, int quantity);
        static InteractObjective *interact(const std::string &description, Interactable *interactable);
        static LocationObjective *location(const std::string &description, Location *location);
        static MultiObjective *multi(const std::string &description, std::vector<Objective *> objectives);

};