#ifndef PAINTROOM_H
#define PAINTROOM_H

// Define the RoomData structure to store room details
struct RoomData {
    int numrows;        // Number of rows in the room
    int numcols;        // Number of columns in the room
    char **roomArray;   // 2D array representing the room's grid
};

// Function declarations

/**
 * Prints the name of the student who worked on the solution.
 */
void printName();

/**
 * Finds the starting position of 'A' in the room.
 * 
 * @param room A reference to the RoomData structure containing the room grid.
 * @param startRow Pointer to store the starting row of 'A'.
 * @param startCol Pointer to store the starting column of 'A'.
 */
void findStartPosition(RoomData& room, int* startRow, int* startCol);

/**
 * Begins the painting process in the room, calling the recursive function.
 * 
 * @param room A reference to the RoomData structure containing the room to be painted.
 */
void paintRoom(RoomData& room);

/**
 * Recursively paints the room, filling adjacent spaces with successive letters.
 * 
 * @param room A reference to the RoomData structure containing the room grid.
 * @param row The current row being processed.
 * @param col The current column being processed.
 * @param nextLetter The current letter to be placed in the room.
 * 
 * @return The next letter to be used in the recursion after visiting this cell.
 */
char recPaintRoom(RoomData& room, int row, int col, char nextLetter);

/**
 * Prints the current state of the room.
 * 
 * @param room A reference to the RoomData structure containing the room grid.
 */
void printRoom(RoomData& room);

#endif // PAINTROOM_H
