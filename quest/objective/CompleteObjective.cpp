#include "Objective.h"
#include "CompleteObjective.h"

CompleteObjective::CompleteObjective(std::string title, std::string description) : Objective()
{
  this->title = title;
  this->description = description;
}

CompleteObjective::~CompleteObjective()
{
}

std::string CompleteObjective::getTitle()
{
  return this->title;
}

std::string CompleteObjective::getDescription()
{
  return this->description;
}

void CompleteObjective::check()
{
  // TODO
}