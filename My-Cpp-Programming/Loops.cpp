// Loops in C++ are for loop While loop and do-while loop
#include <iostream> 
using namespace std;
int main() {
    // For loop example
    cout << "For Loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration " << i << endl;
    }

    // While loop example
    cout << "\nWhile Loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << "Iteration " << j << endl;
        j++;
    }

    // Do-while loop example
    cout << "\nDo-While Loop:" << endl;
    int k = 1;
    do {
        cout << "Iteration " << k << endl;
        k++;
    } while (k <= 5);

    return 0;
}
