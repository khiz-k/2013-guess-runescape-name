#include <iostream>
using namespace std;

int main (){
    string runescapeName = "khiz";
    string guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool noMoreGuesses = false;
    string result;

    // game interface
    while (runescapeName != guess && !noMoreGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter guess (name is all lowercase): ";
            cin >> guess;
            guessCount++;
        } else {
            noMoreGuesses = true;
        }
    }

    // game result
    if (noMoreGuesses) {
        result = "You're out of tries, you lost!";
        std::cout << result;
    } else {
        result = "Nice you got it, you won!!!";
        cout << result;
    }

    return 0;
}
