#include <map>
#include "QuestManager.h"
#include "Quest.h"

QuestManager::QuestManager()
{
}

Quest QuestManager::getQuest(std::string name) const
{
  // The iterator will default to the end of the map
  // if the quest isn't found. This allows for proper
  // error handling of unfound quests
  if (quests.count(name) > 0) {
    return this->quests.find(name)->second;
  }
  else {
    throw "Quest not found";
  }
}

void QuestManager::addQuest(Quest *quest)
{
  this->quests.insert(std::pair<std::string, Quest>(quest->getName(), *quest));
}

void QuestManager::check()
{
  // TODO
}