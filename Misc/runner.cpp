#include <iostream>
#include <cstdlib>
#include "paintRoom.h"

using namespace std;

// Helper function to allocate and initialize a room
RoomData createRoom(int rows, int cols, const char roomLayout[9][15]) {
    RoomData room;
    room.numrows = rows;
    room.numcols = cols;

    // Allocate memory for the roomArray
    room.roomArray = new char*[rows];
    for (int i = 0; i < rows; i++) {
        room.roomArray[i] = new char[cols];
    }

    // Copy the provided layout into roomArray
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            room.roomArray[i][j] = roomLayout[i][j];
        }
    }

    return room;
}

// Helper function to free the room's allocated memory
void freeRoom(RoomData room) {
    for (int i = 0; i < room.numrows; i++) {
        delete[] room.roomArray[i];
    }
    delete[] room.roomArray;
}

int main() {
    // Room configuration for the test
    const char roomLayout[9][15] = {
        "**************",
        "* A          *",
        "*   *        *",
        "*   *        *",
        "* ***        *",
        "*            *",
        "* *****      *",
        "* ***        *",
        "**************"
    };

    // Create the room
    RoomData room = createRoom(9, 15, roomLayout);

    // Print initial room configuration
    cout << "Initial room:" << endl;
    printRoom(room);

    // Call paintRoom function to process the room
    paintRoom(room);

    // Print the room after the algorithm has run
    cout << "Room after algorithm:" << endl;
    printRoom(room);

    // Free the allocated memory
    freeRoom(room);

    return 0;
}
