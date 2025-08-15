// Practically Using TERNARY OPERATOR TO FIND WHETHER A NUMBER IS ODD OR EVEN
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Using the ternary operator to check if the number is odd or even
    (number % 2 == 0) ? cout << number << " is even." : cout << number << " is odd.";

    cout << endl; 
    return 0;
}