#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

// Generates random number for the user to attempt to guess
// Number is an integer between 1 and 10.
int numGenerator() {
  srand((unsigned) time(0));
  int winNumber;
    winNumber = (rand() % 10 + 1);
    return winNumber;
}

// Offers user 3 opportunities to guess the correct answer
// There's no error checking for char or string vs int inputs. 
// We have not been taught this, but I identify it could be an issue from prior
// python experience.
void startGame() {
    int winningNum = numGenerator();
    int guess;
    int guesscount = 1;
    bool correct = false;
    cout << "                Guess a Number\n";
    cout << "                **************\n\n";
    cout << "You will get three chances to guess the number\n\n";
    cout << "Guess a number between 1 and 10.\n\n";
    while (guesscount < 4 && correct != true) { // While under 3 guesses and not correct
        cout << "Guess:" << guesscount << " Enter your answer: ";
        cin >> guess;
        cout << "\n";
        if (guess == winningNum) { // If correct end loop conditions
            correct = true;
            cout << "Congratulations! You guessed correctly!\n" << endl;
        } 
        else {
            if (guesscount == 3) { // If out of guesses and not correct end game
                cout << "Sorry wrong answer. You have reached the limit\n\n" << endl;
                cout << "Correct number : " << winningNum << endl;

            }
            else { // If wrong and still have addtional guesses, continue loop
                cout << "Sorry wrong answer, try again\n" << endl;
            }
            ++guesscount;
        }
    }
    return;
}

// Calls guess 3 game function when run.
int main() {    
    startGame();
    return 0;
}