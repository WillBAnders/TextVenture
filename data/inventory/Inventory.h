#include<iostream>
#include<vector>
#include <algorithm>
#include <map>
#include "Item.h"

class Inventory {

    public:

        Item *getItem(std::string name) const {};
        void addItem(Item *item);
        //TODO: Display method for all items

    private:

        std::map<std::string, Item *> items = std::map<std::string, Item *>();

};