#include <iostream>
#include "Quest.h"

Quest::Quest(
  std::string name,
  std::string description,
  std::vector<Objective*> prereq,
  std::vector<Objective*> objectives,
  bool isSideQuest)
{
  this->name = name;
  this->description = description;
  this->prereq = prereq;
  this->objectives = objectives;
  this->isSideQuest = isSideQuest;
}

std::string Quest::getName() const
{
  return this->name;
}

std::string Quest::getDescription() const
{
  return this->description;
}

void Quest::offer()
{
  // Print the quest information
  std::cout << "Title:\n"
            << this->name << "\n\n";
  std::cout << "Description:\n"
            << this->description << "\n\n";

  // Print all the prereqs
  for (int i = 0; i < this->prereq.size(); i++)
  {
    std::cout << i + ". " << this->prereq.at(i)->getTitle() << "\n";
  }
  std::cout << "\n\n";

  // Print all the objectives (title only)
  for (int i = 0; i < this->objectives.size(); i++)
  {
    std::cout << i + ". " << this->objectives.at(i)->getTitle() << "\n";
  }
  std::cout << "\n\n";
}

void Quest::start()
{
  // TODO
}

void Quest::check()
{
  // TODO
}