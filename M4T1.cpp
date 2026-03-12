/* CSC-134
Kevin Nelson
M4T1
3-12-26 */

// We're going to make a while loop that counts from 1 to 15
// We're going to pretend to be Jack Torrance from the Shining
#include <iostream>
using namespace std;

int main(){
    int number = 0;

    while (number < 15) {
        cout << "All work and no play makes Jack a dull boy.\n";
        number++;
    }
    cout << "Here's Johnny!" << endl;
    return 0;
}
