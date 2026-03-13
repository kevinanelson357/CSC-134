/* CSC-134
Kevin Nelson
M3Bonus AI prompted
3-12-26*/

// I need to come up with a dungeon escape game that uses the numbers 1 2 and 3 for choices.
// It needs to be a simple game but it can use loops and functions but thats all
// everything after this is AI coding aka Vibe Coding

#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
void startCell();
void armory();
void exitGate();

int main() {
    cout << "--- ESCAPE FROM THE SHADOW DUNGEON ---" << endl;
    startCell();
    return 0;
}

// The first room
void startCell() {
    int choice = 0;
    bool inRoom = true;

    while (inRoom) {
        cout << "\nYou wake up in a cold cell. The door is cracked open." << endl;
        cout << "1. Sneak out into the hallway." << endl;
        cout << "2. Search the hay on the floor." << endl;
        cout << "3. Scream for help." << endl;
        cout << "Enter (1, 2, or 3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You slip out quietly..." << endl;
                inRoom = false; // Break the loop
                armory();       // Move to next function
                break;
            case 2:
                cout << "You found a rusty nail! Not very useful, but neat." << endl;
                break;
            case 3:
                cout << "The guard hears you. GAME OVER." << endl;
                return; // Ends the program
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}

// The second room
void armory() {
    int choice = 0;
    bool inRoom = true;

    while (inRoom) {
        cout << "\nYou are in the armory. Weapons line the walls." << endl;
        cout << "1. Put on a heavy suit of armor." << endl;
        cout << "2. Grab a sharp sword." << endl;
        cout << "3. Hide in a barrel." << endl;
        cout << "Enter (1, 2, or 3): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Too heavy! You can't move. The guards catch you." << endl;
            return;
        } else if (choice == 2) {
            cout << "Armed and ready, you head for the exit." << endl;
            inRoom = false;
            exitGate();
        } else if (choice == 3) {
            cout << "You wait... and wait... eventually you fall asleep. Captured." << endl;
            return;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
}

// The final room
void exitGate() {
    cout << "\nYou reached the gate! With your sword, you fight off the last guard." << endl;
    cout << "CONGRATULATIONS! YOU ESCAPED!" << endl;
}

