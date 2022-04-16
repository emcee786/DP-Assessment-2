#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to calculate the discriminant
float discriminant(float a,float b, float c) {
    float discrim;
    discrim = (b*b) - (4*a*c);
    return discrim;
}

// Function that reports the root vlues to solve a quadratic equation
int printer(float a, float b, float c) {
    float discrim = discriminant(a,b,c);
    if (discrim < 0) { // Roots are imaginary
        cout << "Roots are imaginary \n\n";
        cout << "  x1 = nan;   x2 = nan\n";
    } 
    else if (discrim > 0) { // Roots real and diff calculate each and print
        cout << "Roots are real and unequal \n\n";
        float x1 = (-b + sqrt(discrim)) / (2 * a);
        float x2 = (-b - sqrt(discrim)) / (2 * a);
        cout << " x1 = " << x1 << "   x2 = " << x2 << "\n"; 
    }
    else { // Left over must be repeated. Print it out
        cout << "Roots are real and equal\n\n";
        float real = -b / (2 * a);
        cout << " x1 = " << real << "   x2 = " << real << "\n"; 
    }
    return 0;
}

// When this main function is called it asks the user for the a,b,c values for
// a quatratic problem. It checks the dicriminant and then prints what type of
// roots are present and prints them if not imaginary.
// User input is assumed to be in correct format as there
// is no type exception handling performed.
int main() {
    float a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    printer(a, b, c);
    return 0;
}

