//switch statement in C++
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    cout << "Day of the Week" << endl;

    switch (day) {
        case 1:
            cout << "Monday" << endl; // Case for Monday
            break;
        case 2:
            cout << "Tuesday" << endl; // Case for Tuesday
            break;
        case 3:
            cout << "Wednesday" << endl; // Case for Wednesday
            break;
        case 4:
            cout << "Thursday" << endl; // Case for Thursday
            break;
        case 5:
            cout << "Friday" << endl; // Case for Friday
            break;
        case 6:
            cout << "Saturday" << endl; // Case for Saturday
            break;
        case 7:
            cout << "Sunday" << endl; // Case for Sunday
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl; // Default case
    }

    return 0;
}