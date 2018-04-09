#ifndef MULTIOBJECTIVE_H
#define MULTIOBJECTIVE_H

#include <vector>
#include "Objective.h"

class MultiObjective : public Objective
{
private:
  vector<Objective> objectives;

public:
  void check();
}

#endif