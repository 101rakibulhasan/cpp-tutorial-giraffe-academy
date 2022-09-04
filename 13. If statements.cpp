#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;
    if(isMale && isTall)
    {
        cout << "perfect";
    }else if(!isMale && isTall)
    {
        cout << "ok";
    }else if(isMale && !isTall)
    {
        cout << "maybe";
    }else
    {
         cout << "nope";
    }

    return 0;
}
