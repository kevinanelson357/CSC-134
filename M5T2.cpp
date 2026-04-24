/* if I'm understanding this correctly we're now making a squaring function
so 5 would become 25, etc. */
#include <iostream>
#include <string>
using namespace std;

// declare a function
int square(int number);
int main() {
    int number = 5;
    int answer;
    answer = square(number);
    cout << "The answer is " << answer << endl;
    return 0;
}