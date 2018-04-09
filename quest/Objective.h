#ifndef OBJECTIVE_H
#define OBJECTIVE_H

class Objective
{
protected:
  string name;
  string description;

public:
  virtual void check();
}

#endif