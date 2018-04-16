#include<iostream>
#include<vector>
#include <algorithm>
//#include<conio.h>


using namespace std;
class inventory
{
private:
    vector <string> itemarray;
    vector <int> itemquantity;

public:
    void add(string item, int quantity);
    void deleteitem(string item);
    void displayinventory();

};
void inventory :: add(string item, int quantity)
{
    itemarray.push_back(item);
    itemquantity.push_back(quantity);

}


void inventory :: deleteitem(string item)
{
    for (int i=0; i<itemarray.size(); i++)
        if(itemarray.at(i) == item) {
            itemarray.erase(itemarray.begin()+i);
            itemquantity.erase(itemquantity.begin()+i);
        }

}

void inventory :: displayinventory()
{
    cout << "In your inventory is :  ";
    for(int i; i < itemarray.size(); i++) {

        cout << itemarray.at(i) << "(" << itemquantity.at(i) << "), ";

    }

    cout << endl;

}
