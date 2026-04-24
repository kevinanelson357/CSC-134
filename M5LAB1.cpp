/* It's choose your own adventure time! This time we'll be more complex and make the order the rooms are checked count.
In order to not die by alien, The player needs to go to the armory before the engine bay. If the player doesn't secure the weapon before finding the alien they die.
 The only weapon to use aginst the alien is in the armory.
Once the alien is found, you must use the weapon from the armory to defeat it. */
#include <iostream>
using namespace std;
// let's start this off right. Set the scene for the player.
int main() {
    int choice;
     cout << " You've been tasked with checking the ducting system of a spaceship." << endl;
     cout << " The captain stated there's a biological signature that has been moving between the engine bays and the crew quarters" << endl;
     cout << " Betwen the two main areas there is an armory and a cafeteria. You must check all rooms to find the source of the signature." << endl;
     cout << " Which of the four rooms do you want to check first?" << endl;
     cout << " Type 1 for the engine bay, 2 for the crew quarters, 3 for the armory, and 4 for the cafeteria: ";
     cin >> choice;
     if (1 == choice) {}