// Greatest of 3 integers using logical operators
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Using logical operators to find the greatest of three integers
    if ((a >= b) && (a >= c)) {
        cout << a << " is the greatest." << endl;
    } else if ((b >= a) && (b >= c)) {
        cout << b << " is the greatest." << endl;
    } else {
        cout << c << " is the greatest." << endl;
    }

    return 0;
}