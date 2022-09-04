#include<iostream>

using namespace std;

void sayHi(string x, int age)
{
    cout << "Hello " << x << "! You are " << age << " years old!" << endl;
}

int main()
{
    string name = "Rakib";
    sayHi(name, 35);
    sayHi("you", 15);
    sayHi("duck", 25);
    return 0;
}
