#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    //REFERENCING THE POINTER
    cout << pAge << endl;
    cout << pGpa << endl;
    cout << pName << endl;

    // * FOR GETTING THE ACTUAL VALUE MEMORY ADDRESS
    // & FOR GETTING THE POINTER ADDRESS
    cout << &*&gpa << endl;

    //DEREFERENCING THE POINTER
    cout << *pAge << endl;

    return 0;
}
