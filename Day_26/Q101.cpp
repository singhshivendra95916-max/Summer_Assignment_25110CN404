#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int number = (rand() % 100) + 1;
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "Enter your guess (1 - 100) : ";
        cin >> guess;
        attempts++;

        if (guess < number)
            cout << "Too Low! \nGuess higher." << endl;
        else if (guess > number)
            cout << "Too High! \nGuess lower" << endl;
        else
            cout << "Correct! \nYou won." << endl;

    } while (guess != number);

    cout << "You guessed the number in "
         << attempts << " attempts." << endl;

    return 0;
}