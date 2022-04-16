
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


/// Function to calculate the bill total 
float powerBill(float units) {
    // following two arrays: block size and price respectively
    float unitBlocks[4] = {300, 200, 100, 0};
    float unitCost[4] = {1, 0.80, 0.50, 0.30};
    float total = 0;
    float remainder = units;
    for (int i = 0; i < 4; i++) { // this loop consumes units and tallies cost of units
        if (remainder - unitBlocks[i] > 0) {
            total += (unitCost[i] * (remainder - unitBlocks[i]));
            remainder -= (remainder - unitBlocks[i]);
        }
    }
    return total;
}

// Function for print output
void printer(string custName, string custNum, float units) {
    float total = powerBill(units);
    cout << "\n";
    cout << "\n";
    cout << "Auckland Power - Customer Bill" << endl;
    cout << "\n";
    cout << "****************************" <<endl;
    cout << "\n";
    cout << "Customer Number : " << custNum << endl;
    cout << "\n";
    cout << "Customer Name : " << custName << endl;
    cout << "\n";
    cout << "Units consumed : " << units << endl;
    cout << "\n";
    cout << "Amount : " << total << endl;
    cout << "\n";
    cout << "****************************" <<endl;
    cout << "\n";
    }

// Running this function will ask the user for billing information. It will then calculate 
// the bill total and print this along with the users iput information.
// Input information is expected to be in correct form.
int main() {
  string custName;
  string custNum;
  float units;
    cout << "Enter Customer Name : ";
    getline (cin, custName);
    cout << "Enter Customer Number : ";
    getline (cin, custNum);
    cout << "Enter consumed units : ";
    cin >> units;
    printer (custName, custNum, units);
  return 0;
}


