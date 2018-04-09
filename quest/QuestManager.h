#ifndef QUESTMANAGER_H
#define QUESTMANAGER_H

#include <map>
#include "Quest.h"

class QuestManager
{
private:
  map<string, Quest> quests;

public:
  Quest getQuest(string name) const;
  void check();
}

#endif