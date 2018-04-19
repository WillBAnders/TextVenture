#pragma once

#include <vector>
#include "objective/Objective.h"

<<<<<<< HEAD
class Quest
{
public:
  Quest(std::string name, std::string description, std::vector<Objective*> prereq, std::vector<Objective*> objectives, bool isSideQuest);

  std::string getName() const;
  std::string getDescription() const;

  void offer();
  void start();
  void check();
=======
class Quest {

    public:

        Quest(std::string name, std::string description) : name(std::move(name)), description(std::move(description)) {};
        std::string getName() const;
        std::string getDescription() const;
        bool isComplete() const;
        void offer();
        void start();
        void check();

    protected:

        int progress;
        std::vector<Objective> prereqs = std::vector<Objective>();
        std::vector<Objective> objectives = std::vector<Objective>();

    private:

        std::string name;
        std::string description;
>>>>>>> 6d884e4298d67d5fabf1c99dbe93d7c0219820f1

private:
  std::string name;
  std::string description;
  std::vector<Objective*> prereq;
  std::vector<Objective*> objectives;
  bool isSideQuest;
};