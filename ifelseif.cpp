//if esle if statements in C++
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Grade Evaluation" << endl;

    if (marks >= 90) {
        cout << "Grade: A" << endl; // If condition is true
    } else if (marks >= 80) {
        cout << "Grade: B" << endl; // Else if condition is true
    } else if (marks >= 70) {
        cout << "Grade: C" << endl; // Else if condition is true
    } else if (marks >= 60) {
        cout << "Grade: D" << endl; // Else if condition is true
    } else {
        cout << "Grade: F" << endl; // Else condition
    }

    return 0;
}