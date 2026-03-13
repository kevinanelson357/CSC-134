/* CSC-134
Kevin Nelson
M4HW
3-12-26*/

// We're making a multiplication table for bronze first which will be multiples of 5
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "We're going to multiply by 5s today.\n";
    cout << "Enter a number between 1 and 10: ";
    int number;
    double result;
    cin >> number;
    result = number * 5;
    cout << "Times 5 equals " << result << endl;
    // next let's make a multiplication of 10s for silver
    cout << "Now we're going to multiply by 10s.\n";
    cout << "Enter a number between 1 and 100: ";
    cin >> number;
    result = number * 10;
    cout << "Times 10 equals: :" << result << endl;
    // Next stop is Gold where we will multiply by 100s
    cout << " You're a Pro! So let's multiply by 100s.\n";
    cout << "Enter a number between 1 and 100: ";
    cin >> number;
    result = number * 100;
    cout << "Times 100 equals: " << result << endl;
    return 0;
}