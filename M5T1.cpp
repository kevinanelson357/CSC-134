/* For the purposes of this one we're making void functions */
#include <iostream>
#include <string>
using namespace std;

// declare a function
string formatAnswer (int answer);
void printAnswer(string msg);

int main() {
    int answer = 7;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;
}
// define functions here

string formatAnswer (int answer) {
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);
    return answerMessage;
}
// dispaly the message
void printAnswer(string msg) {
    cout << msg << endl;
}