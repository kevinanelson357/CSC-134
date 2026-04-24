/* For the purposes of this one we're making void functions */
#include <iostream>
#include <string>
using namespace std;

// declare a function
string formatAnswer (int answer);
void printAnswer(string mag);

int main() {
    int answer = 7;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;

}