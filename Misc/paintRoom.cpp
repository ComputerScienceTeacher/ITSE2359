#include <iostream>
#include "paintRoom.h"

using namespace std;

void printName() {
    cout << "\nThis solution was completed by:\n";
    cout << "Perla Magallon\n";
}

/* 
 * Helper function to find the location of 'A' in the room.
 * 
 * @param room The RoomData structure containing the room grid.
 * @param startRow Pointer to store the starting row of 'A'.
 * @param startCol Pointer to store the starting column of 'A'.
 */
void findStartPosition(RoomData& room, int* startRow, int* startCol) {
    for (int i = 0; i < room.numrows; i++) {
        for (int j = 0; j < room.numcols; j++) {
            if (room.roomArray[i][j] == 'A') {
                *startRow = i;
                *startCol = j;
                return;
            }
        }
    }
    cout << "Error: Starting position 'A' not found in the room.\n";
}

/*
 * The main function that starts the recursive paint process.
 * 
 * @param room The RoomData structure containing the room to be painted.
 */
void paintRoom(RoomData& room) {
    int startRow = -1, startCol = -1;
    
    // Find the starting position of 'A'
    findStartPosition(room, &startRow, &startCol);

    if (startRow == -1 || startCol == -1) {
        cout << "Error: Could not find start position 'A'.\n";
        return;
    }

    // Declare the starting letter as 'A'
    char nextLetter = 'A';

    // Replace 'A' with a space as it's the starting point
    room.roomArray[startRow][startCol] = ' ';

    // Start the recursion
    recPaintRoom(room, startRow, startCol, nextLetter);
}

/*
 * Recursively paints the room with letters.
 * 
 * @param room A reference to the RoomData structure containing the room grid.
 * @param row The current row being processed.
 * @param col The current column being processed.
 * @param nextLetter The current letter to be placed in the room.
 * 
 * @return The next letter to be used in the recursion after visiting this cell.
 */
char recPaintRoom(RoomData& room, int row, int col, char nextLetter) {
    // Check for boundary conditions: ensure we don't go out of bounds
    if (row < 0 || col < 0 || row >= room.numrows || col >= room.numcols) {
        return nextLetter;  // Stop if we're out of the room's bounds
    }

    // Base case: Hit a wall ('*') or already visited cell with a letter (A-Z)
    if (room.roomArray[row][col] == '*' || 
        (room.roomArray[row][col] >= 'A' && room.roomArray[row][col] <= 'Z')) {
        return nextLetter;
    }

    // Mark the current cell with the next letter
    room.roomArray[row][col] = nextLetter;

    // Increment the letter for the next step, but cap it at 'Z'
    if (nextLetter < 'Z') {
        nextLetter++;  // Increment letter only if it's less than 'Z'
    }

    // Recursive calls to move in all four directions
    nextLetter = recPaintRoom(room, row + 1, col, nextLetter);  // Move down
    nextLetter = recPaintRoom(room, row - 1, col, nextLetter);  // Move up
    nextLetter = recPaintRoom(room, row, col + 1, nextLetter);  // Move right
    nextLetter = recPaintRoom(room, row, col - 1, nextLetter);  // Move left

    return nextLetter;
}

/*
 * Prints the current state of the room.
 * 
 * @param room The RoomData structure containing the room grid.
 */
void printRoom(RoomData& room) {
    for (int i = 0; i < room.numrows; i++) {
        for (int j = 0; j < room.numcols; j++) {
            cout << room.roomArray[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
