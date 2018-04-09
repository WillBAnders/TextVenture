#ifndef COMPLETEOBJECTIVE_H
#define COMPLETEOBJECTIVE_H

#include "Quest.h"
#include "Objective.h"

class CompleteObjective : public Objective
{
private:
  Quest quest;

public:
  void check();
}

#endif