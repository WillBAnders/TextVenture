#ifndef QUEST_H
#define QUEST_H

#include <vector>
#include "Objective.h"

class Quest
{
private:
  string name;
  string description;
  vector<Objective> prereq;
  vector<Objective> objectives;

public:
  string getName() const;
  string getDescription() const;

  void offer();
  void start();
  void check();
}

#endif