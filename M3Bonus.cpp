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
    cout << " You see a door to your left, a window to the front, and a staircase to your right.\n";
    cout << "Type 1 foor the door, 2 for the window, and 3 for the stairs:";
    cin >> choice;
    if (choice == 1) {
        cout << " The door opens revealing a guard. He strikes you and slams the door.\n";
    }
        else if (choice == 2) {
            cout << " You leap out recklessly. Your legs snap as you hit the courtyard. \n";
            cout << " You will now be tortured be the Mad Wizard.";
        }
        else if (choice == 3) {
            cout << "You slowly creep down the stairs. There is a hall leading left and right.\n";
            cout << " at each end is a door. Type 1 for left or 2 for right.";
            cin >> choice;
            if (choice == 1) {
                cout << "The door opens revealing the keep's courtyard. You can run for it or sneak out.\n";
                cout << "Type 1 to Run or 2 to Sneak.";
            }
            else if (choice == 2) {
                cout << "You've found the Mad Wizard's study. He grins at you as you feel you're body freeze\n";
                cout << " You will now be tortured by the Mad Wizard.";
                return 0;
            }

            }
                cin >> choice;
                if (choice ==1) {
                    cout << "You run for it. The guard give chase but you are faster. You escape into the forest.";
                }
                    else if (choice == 2) {
                        cout << "You hear a laugh behind you. The guard stabs you with his spear. You are dead.";
                    }
                    
                }
