#include<iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "can make chicken" << endl;
    }

    void makeSalad()
    {
        cout << "can make salad" << endl;
    }
};

//INHERIT OTHER CLASS
class ItalianChef : public Chef{

};

int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef ichef;
    ichef.makeSalad();
}
