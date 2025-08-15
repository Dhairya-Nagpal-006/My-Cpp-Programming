//Infinite loops in C++ using for while and do-while loops
#include <iostream>
using namespace std;
int main() {
    // Infinite loop using for loop
    for (;;) {
        cout << "This is an infinite for loop." << endl;
        // Uncomment the next line to break the loop
        // break;
    }

    // Infinite loop using while loop
    while (true) {
        cout << "This is an infinite while loop." << endl;
        // Uncomment the next line to break the loop
        // break;
    }

    // Infinite loop using do-while loop
    do {
        cout << "This is an infinite do-while loop." << endl;
        // Uncomment the next line to break the loop
        // break;
    } while (true);

    return 0;
}