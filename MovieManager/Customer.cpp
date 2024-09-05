#include "Customer.h"
#include <iostream>

using namespace std;


Customer::Customer() : name("") {}

Customer::Customer(string name) : name(name) {}

string Customer::getName() const { return name; }

void Customer::rentMovie(Movie& movie) {
    if (movie.isAvailable()) {
        movie.rent();
        rentedMovies.push_back(movie);
    }
}

void Customer::returnMovie(Movie& movie) {
    for (size_t i = 0; i < rentedMovies.size(); i++) {
        if (rentedMovies[i].getTitle() == movie.getTitle()) {
            movie.returnMovie();
            rentedMovies.erase(rentedMovies.begin() + i);
            break;
        }
    }
}

void Customer::displayRentedMovies() const {
    cout << "Movies rented by " << name << ":\n";
    for (const auto& movie : rentedMovies) {
        cout << movie.getTitle() << " (" << movie.getYear() << ")\n";
    }
}
