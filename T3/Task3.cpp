#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function generates 6 random numbers between 10 and 20 inclusive.
// it prints the numbers and the amounts of odd and even numbers generated
void numberGenerator() {
    cout << "Random numbers between 10 to 20";
    cout << "\n*****************************************\n";
    int randomNum;
    int evens = 0; 
    int odds = 0;
    int i = 0;
    while (i < 6) { // generates 6 numbers
        randomNum = rand() % 10 + 11;
        if (randomNum % 2 == 0) { // if even add to even count else odd count
            evens += 1;
        }
        else {
            odds += 1;
        }
        cout << randomNum;
        if (i < 5) { // add commas netween numbers
            cout << ", ";
        }
        i++;
    }
    cout << "\nNumber of even numbers in the list: " << evens << endl; 
    cout << "Number of odd numbers in the list: " << odds << endl; 
    return; 
}


// Initiates number gnerator after initialising seed.  
int main() {
    srand(time(0));
    numberGenerator();
    return 0;
}