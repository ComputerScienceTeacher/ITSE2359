#ifndef MOVIE_H
#define MOVIE_H
#include <string>

using namespace std;

class Movie {
    private:
        string title;
        string genre;
        int year;
        bool available;

    public:
        // Default constructor
        Movie();

        // Parameterized constructor
        Movie(string title, string genre, int year, bool available = true);

        // Getters
        string getTitle() const;
        string getGenre() const;
        int getYear() const;
        bool isAvailable() const;

        // Methods to rent and return the movie
        void rent();
        void returnMovie();
};


#endif // MOVIE_H