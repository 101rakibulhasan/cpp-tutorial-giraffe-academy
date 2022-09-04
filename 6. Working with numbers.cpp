#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num = 69420;
    double acc = 4.6;

    cout << num << endl;
    cout << num % 7 << endl;

    cout << num / ++acc << endl;
    cout << num / acc++ << endl;
    cout << num / acc << endl;

    cout << pow(2,100) << endl;
    cout << sqrt(36) <<endl;

    cout << round(4.1) <<endl;
    cout << ceil(4.1) <<endl;
    cout << floor(4.1) <<endl;

    cout << fmax(3,10) <<endl;
    cout << fmin(3,10) <<endl;

    return 0;
}
