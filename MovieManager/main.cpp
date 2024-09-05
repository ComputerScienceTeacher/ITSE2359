#include "Movie.h"
#include "Customer.h"
#include "RentalStore.h"
#include <iostream>
using namespace std;

int main(){
    RentalStore store;

    //adding movies
    store.addMovie(Movie("The Matrix", "Sci-Fi", 1999));
    store.addMovie(Movie("Inception", "Sci-Fi", 2010));
    store.addMovie(Movie("The Godfather", "Crime", 1972));

    //adding customers
    Customer customer1("John Doe");
    Customer customer2("Jane Smith");

    store.addCustomer(customer1);
    store.addCustomer(customer2);
    cout << endl;
    store.displayAvailableMovies();
    cout << endl;
    store.rentMovie("The Matrix", customer1);

    store.displayAvailableMovies();
    
    cout << endl;
    
    customer1.displayRentedMovies();
    customer2.displayRentedMovies();

    store.returnMovie("The Matrix", customer1);
    cout << endl;
    store.displayAvailableMovies();






}
