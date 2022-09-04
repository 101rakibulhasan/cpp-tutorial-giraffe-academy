#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    string name = "Mike";
    double pi = 3.14;
    char favouriteLetter = 'G';

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Garry Potter";
    book2.author = "howling";
    book2.pages = 40;
    book2.title = "Larry Potter";

    cout << book2.title;

    return 0;
}
