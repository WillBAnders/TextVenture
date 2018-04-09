#ifndef INTERACTOBJECTIVE_H
#define INTERACTOBJECTIVE_H

#include "Objective.h"

class InteractObjective : public Objective
{
private:
  string object; // TODO: Reimplement as Interactable type

public:
  void check();
}

#endif