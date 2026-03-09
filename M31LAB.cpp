// if statements - example 2
// Kevin Nelson
// CSC 1134
// M31LAB
// 3-9-26


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "You are in a dark dungeon of dispair. You see a gate with the number one etched in it. There is a well with the number two etched in it." << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose the gate. The rusty gate creaks loudly. You are now in a hall with two doors." << endl;
  }
  else if (2 == choice) {
  	cout << "You chose the well. You fall to your death." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method