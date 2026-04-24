/* if I'm understanding this correctly we're now making a squaring function
so 5 would become 25, etc. */
#include <iostream>
#include <string>
using namespace std;

// declare a function where a user can input a number and it will be squared and then printed out
void squareNumber() {
    cout << "Enter a number to be squared: ";
    double number;
    cin >> number;
    double result = number * number;
    cout << "The square of " << number << " is " << result << endl;
}
// main function to call the squareNumber function
int main() {
    squareNumber();
    return 0;
}