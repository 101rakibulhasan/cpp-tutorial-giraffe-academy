#include<bits/stdc++.h>

using namespace std;

int main()
{
    int secretNum = 7, countt = 3;
    int guess;
    cout << "Guess the number :  "<< endl;
    cin >> guess;

    while(guess != 7 && countt > 1)
    {
        countt--;
        cout << "Wrong!" << endl;
        cin >> guess;
    }
    if(guess == secretNum){
    cout << "Correct !!!  "<< endl;
    }
    return 0;
}
