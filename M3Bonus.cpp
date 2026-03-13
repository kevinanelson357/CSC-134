/* CSC-134
Kevin Nelson
M3Bonus no Ai
3-12-26*/

// Ok so I've been watching a lot of stuff on Youtube, I bought a minipc with Ubuntu on it. 
// So it's time to start actually performing. We're making the MUD style dungeon escape I made earlier.
// But this time I'd like to have the player choose at leat 5 choices. 

#include <iostream>
using namespace std;

// Let's escape this mothatrucka
int main() {
    int choice;
    cout << "You wake up in a dark room with a terrible headache. Your weapons have been taken.\n";
    cout << "You must eascape before the Mad Wizard has you tortured.\n";
    cout << " You see a door to your left, a window to the front, and a staircas to your right.\n";
    cout << "Type 1 foor the door, 2 for the window, and 3 for the stairs:";
    cin >> choice;
    if (choice == 1) {
        cout << " The door opens revealing a guard. He strikes you and slams the door.\n";
        else if (choice == 3) {
            cout << "You slowly creep down the stairs. There is a hall leading left and right.\n";
            cout << " at each end is a door. Type 1 for left or 2 for right.";
            cin >> choice;
            if (choice == 1) {
                
            }
        }
    }"
}