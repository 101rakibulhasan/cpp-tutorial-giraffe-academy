#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: " ;
    getline(cin, name); //for getting multiple character

    cout << "Hello " << name << endl;

    int age;
    cout << "Enter your age: " ;
    cin >> age; //for char and int

    cout << "You are " << age << " years old" << endl;

    return 0;
}
