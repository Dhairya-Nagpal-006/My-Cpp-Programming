// Logical Operators &&  ||  ! i.e. and or not
#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;

    // Using logical AND operator
    if (a < 15 && b > 15) {
        cout << "Both conditions are true: a < 15 and b > 15" << endl;
    } else {
        cout << "At least one condition is false." << endl;
    }

    // Using logical OR operator
    if (a < 5 || b > 15) {
        cout << "At least one condition is true: a < 5 or b > 15" << endl;
    } else {
        cout << "Both conditions are false." << endl;
    }

    // Using logical NOT operator
    if (!(a == 10)) {
        cout << "a is not equal to 10" << endl;
    } else {
        cout << "a is equal to 10" << endl;
    }

    return 0;
}