#include "Objectives.h"
#include <utility>

CollectObjective *Objectives::collect(const std::string &description, Item *item, int quantity) {
    return new CollectObjective(description, item, quantity);
}

DefeatObjective *Objectives::defeat(const std::string &description, Enemy *enemy, int quantity) {
    return new DefeatObjective(description, enemy, quantity);
}

InteractObjective *Objectives::interact(const std::string &description, Interactable *interactable) {
    return new InteractObjective(description, interactable);
}

LocationObjective *Objectives::location(const std::string &description, Location *location) {
    return new LocationObjective(description, location);
}

MultiObjective *Objectives::multi(const std::string &description, std::vector<Objective *> objectives) {
    return new MultiObjective(description, objectives);
}