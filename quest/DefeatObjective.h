#ifndef DEFEATOBJECTIVE_H
#define DEFEATOBJECTIVE_H

#include "Objective.h"

class DefeatObjective : public Objective
{
private:
  string enemy; // TODO: Reimplement as enemy type instead of string
  int quantity;

public:
  void check();
}

#endif