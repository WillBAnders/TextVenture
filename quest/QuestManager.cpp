#include <map>
#include "QuestManager.h"
#include "Quest.h"

Quest QuestManager::getQuest(string name)
{
  // Define an iterator for our map
  map<string, Quest>::iterator it;

  // The iterator will default to the end of the map
  // if the quest isn't found. This allows for proper
  // error handling of unfound quests
  it = this->quests.find(name);
  if (it != it.end()) {
    return return this->quests.find(name)->second;
  }
  else {
    throw "Quest not found";
  }
}

void QuestManager::check()
{
  // TODO
}