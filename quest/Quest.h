#pragma once

#include <vector>
#include "objective/Objective.h"

class Quest
{
public:
  Quest(std::string name, std::string description, std::vector<Objective> prereq, std::vector<Objective> objectives);

  std::string getName() const;
  std::string getDescription() const;

  void offer();
  void start();
  void check();

private:
  std::string name;
  std::string description;
  std::vector<Objective> prereq;
  std::vector<Objective> objectives;
};