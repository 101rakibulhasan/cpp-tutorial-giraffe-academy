#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book()
        {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        //CONSTRUCTOR FUNCTION = function within a class and called while making an object
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
//    Book book1("Harry Potter", "JK Rowling", 500);
    Book book1;
    //book1.author = "Nooooo";

    Book book2;
    cout << book1.author;

    return 0;
}
