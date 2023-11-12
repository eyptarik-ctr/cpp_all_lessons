#include <iostream>
#include <string>
using namespace std;
int main() {
    // while loop
    // while (condition){
    //      code block to be executed
    // }
    int i = 4;
    while (i < 5) {
        i++;

    }
    // do while
    do {
        // execute this
    }
    //while(//condition);

    // for loop
    //for (value;condition;make this){do this}
    for (int i=5;i>0 ;i--){
        cout << i;
    }

    // ARRAYS
    string my_str[2] = {"name","hello"};
    int myNum[3] = {10, 20, 30};
    //Access the Elements of an Array
    myNum[0]

    // arrays and loops
    string phone[4] = {"iphone","xiaomi","huaweı","samsung"};
    for (int i = 4; i>0 ; i--){
        cout<< phone[i] << endl;
    }

    // get length arrays
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    //Multi-Dimensional Arrays
    int myArray[2][2] = {
            {1,2},
            {3,4}
    };

    string letters[2][2][2] = {
            {
                    { "A", "B" },
                    { "C", "D" }
            },
            {
                    { "E", "F" },
                    { "G", "H" }
            }
    };

    // why multi arrays
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
            { 0, 1, 1, 0 },
            { 0, 0, 0, 0 },
            { 0, 0, 1, 0 },
            { 0, 0, 1, 0 }
    };

// Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
    //


}
