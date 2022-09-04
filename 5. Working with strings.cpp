#include<iostream>

using namespace std;

int main()
{
    string phrase = "Lol Me";
    cout << "Hello Me" <<endl;
    cout << phrase <<endl;
    cout << phrase.length() <<endl;
    cout << phrase[1] <<endl;


    phrase[0] = 'B';
    cout << phrase <<endl;

    cout << phrase.find("Bol", 0) <<endl;
    cout << phrase.substr(3,3) <<endl;
}
