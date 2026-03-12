/*CSC-134
Kevin Nelson
M3T2
3-12-26 */

// This is going to convert percentage grades into letter grades
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double percentage;
    char letterGrade;
    cout << "Please enter you percentage grade: ";
    cin >> percentage;
// We've got to define what percentage equals what grade
    if (percentage >= 90) { 
        letterGrade = 'A';}
    else if (percentage >= 80) {
        letterGrade = 'B';}
    else if (percentage >= 70) {
        letterGrade = 'C';} 
    else if (percentage >= 60) {
        letterGrade = 'D';}
    else if (percentage <=59) {
        letterGrade = 'F';}
cout << "You have a " << letterGrade << " grade." << endl;
return 0;
    }
    
