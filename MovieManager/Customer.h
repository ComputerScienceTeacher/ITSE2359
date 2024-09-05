#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Customer {
    private:
        string name;
        vector<Movie> rentedMovies;

    public:
        Customer();
        Customer(string name);

        string getName() const;
        void rentMovie(Movie& movie);
        void returnMovie(Movie& movie);

        void displayRentedMovies() const;
};

#endif // CUSTOMER_H