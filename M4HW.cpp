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
    return 0;
}