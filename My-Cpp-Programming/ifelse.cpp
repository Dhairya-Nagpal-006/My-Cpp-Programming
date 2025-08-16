//if else statements in C++
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Even or Odd Evaluation" << endl;

    if (number % 2 == 0) {
        cout << "The number is even." << endl; // If condition is true
    } else {
        cout << "The number is odd." << endl; // Else condition
    }

    return 0;
}