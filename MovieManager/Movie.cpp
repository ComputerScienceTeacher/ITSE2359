#include "Movie.h"

using namespace std;

// Default constructor
Movie::Movie() : title(""), genre(""), year(0), available(true) {}

// Parameterized constructor
Movie::Movie(std::string title, std::string genre, int year, bool available)
    : title(title), genre(genre), year(year), available(available) {}

// Getter for the movie title
string Movie::getTitle() const {
    return title;
}

// Getter for the movie genre
string Movie::getGenre() const {
    return genre;
}

// Getter for the movie release year
int Movie::getYear() const {
    return year;
}

// Getter to check if the movie is available
bool Movie::isAvailable() const {
    return available;
}

// Method to rent the movie (set available to false)
void Movie::rent() {
    if (available) {
        available = false;
    }
}

// Method to return the movie (set available to true)
void Movie::returnMovie() {
    available = true;
}