#include <iostream>
using namespace std;

int main (){
    string runescapeName = "zzKhizzy";
    string guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool noMoreGuesses = false;
    string result;

    // game interface
    while (runescapeName != guess && !noMoreGuesses) {
        if (guessCount < guessLimit) {

        }
    }

    // game result 
    if (noMoreGuesses) {
        result = "You're out of tries, you lost!";
        cout << result;
    } else {
        result = "Nice you got it, you won!!!";
        cout << result;
    }

    return 0;
}