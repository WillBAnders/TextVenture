#include "Quest.h"

Quest::Quest(std::string name, std::string description, std::vector<Objective> prereq, std::vector<Objective> objectives)
{
  this->name = name;
  this->description = description;
  this-> prereq = prereq;
  this->objectives = objectives;
}

std::string Quest::getName() const {
  return this->name;
}

std::string Quest::getDescription() const {
  return this->description;
}

void Quest::offer() {
  // TODO
}

void Quest::start() {
  // TODO
}

void Quest::check() {
  // TODO
}