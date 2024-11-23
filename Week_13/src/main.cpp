#include <iostream>
#include "Aviary.h"
#include "HealthCheck.h"
#include "FileHandler.h"

using namespace std;

void displayMenu() {
    cout << "Aviary Management System\n";
    cout << "1. Add a bird to the aviary\n";
    cout << "2. Remove a bird from the aviary\n";
    cout << "3. View the top bird in the aviary\n";
    cout << "4. Add a bird to the health check queue\n";
    cout << "5. Process the next bird in the health check queue\n";
    cout << "6. Save and Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    Aviary aviary;
    HealthCheck healthCheck;

    // Load saved data
    FileHandler::loadStackFromFile(aviary.getStack(), "aviary.txt");
    FileHandler::loadQueueFromFile(healthCheck.getQueue(), "health_queue.txt");

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                Bird newBird;
                cout << "Enter bird name: ";
                cin >> newBird.name;
                cout << "Enter bird species: ";
                cin >> newBird.species;
                aviary.addBird(newBird);
                cout << "Bird added to the aviary.\n";
                break;
            }
            case 2: {
                try {
                    Bird removedBird = aviary.removeBird();
                    cout << "Removed bird: " << removedBird.name << " (" << removedBird.species << ").\n";
                } catch (const runtime_error& e) {
                    cout << e.what() << "\n";
                }
                break;
            }
            case 3: {
                try {
                    Bird topBird = aviary.peekBird();
                    cout << "Top bird: " << topBird.name << " (" << topBird.species << ").\n";
                } catch (const runtime_error& e) {
                    cout << e.what() << "\n";
                }
                break;
            }
            case 4: {
                Bird newBird;
                cout << "Enter bird name: ";
                cin >> newBird.name;
                cout << "Enter bird species: ";
                cin >> newBird.species;
                healthCheck.addToQueue(newBird);
                cout << "Bird added to the health check queue.\n";
                break;
            }
            case 5: {
                try {
                    Bird nextBird = healthCheck.processNextInQueue();
                    cout << "Processing bird: " << nextBird.name << " (" << nextBird.species << ").\n";
                } catch (const runtime_error& e) {
                    cout << e.what() << "\n";
                }
                break;
            }
            case 6:
                FileHandler::saveStackToFile(aviary.getStack(), "aviary.txt");
                FileHandler::saveQueueToFile(healthCheck.getQueue(), "health_queue.txt");
                cout << "Data saved. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

