#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;

    public:
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating)
        {
            if(aRating == "G" || aRating() == "PG-13")
            {
                rating = aRating;
            }else{
                rating = "NR";
            }

        }

        string getRating()
        {
            return rating;
        }

};


int main()
{
    Movie movie1("The Avg" , "Joss", "PG-13");
    movie1.setRating("Dog");
    cout <<  movie1.getRating();
    return 0;
}
