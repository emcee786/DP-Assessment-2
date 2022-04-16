#include <iostream>
#include <cmath>
#include <list>
#include <vector>
using namespace std;

// Function that checks if an integer is prime and returns true if it is, false if not
bool checkPrime(int target) {
    bool prime = true;
    if (target <= 2) { // numbers less than 3 are not prime
        prime = false;
    }
    else {
        float root = sqrt(target); // n point checking numbers over the root of target
        for (int i = 2; i <= root + 1; ++i) {
            if (target % i == 0) {
                prime = false;
                //break; //no point checking more if factor found
            }
        }
    }
    return prime;
}

// Function that returns true if target divisible by 7, else false
bool checkDivSeven(int target) {
    bool result = false;
    if (target % 7 == 0 && target != 0) {
        result = true;
    }
    return result;
}

// Function to print as per task2 requirements
// User input is assumed to be in correct format as there
// is no type exception handling performed.
void printer(int start, int finish, std::vector<int> primesList,std::vector<int> sevensList) {
    cout << "\nNumbers divisible by 7 from " << start << " to " << finish <<'\n';
    cout << "******************************\n";
    for (int i = 0; i < sevensList.size(); i++) {
        cout << sevensList[i] << ", ";
    }
    cout << "\n\nPrime Numbers\n";
    cout << "*************\n";
    cout << "Prime List between (" << start << " and " << finish << ") :";
        for (int i = 0; i < primesList.size(); i++) {
        cout << primesList[i] << " ";
    }
    cout << "\nTotal number of prime numbers from (" << start << " and " << finish << ") :" << primesList.size()<<'\n';
    return;
}


// Creates lists for sevens and primes then sends them to print function
void checkRange(int start, int finish) {
    std::vector<int> sevensList;
    std::vector<int> primesList;
    for (int i = start; i < finish + 1; i++) {
        if (checkDivSeven(i)) {
            sevensList.push_back(i);
        }
        if (checkPrime(i)) {
            primesList.push_back(i);
        }
    }
    printer(start,finish,primesList,sevensList);
    return;
}

// Running this main will ask user for start and finnish
// It will then check the numbers in this range and print
// out a list of numbers divisible by 7, and a list of 
// numbers that are prime. Can only recive integers, Works
// for negative numbers
int main() {
    int start, finish;
    cout << "Enter start ";
    cin >> start;
    cout << "Enter finish ";
    cin >> finish;
    checkRange(start, finish);
    return 0;
}