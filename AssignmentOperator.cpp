//Assignment operators of C++
#include <iostream>
using namespace std;
int main(){
    int a= 10;
    // =  is Assignment operator
    a += 10;
    cout << "Value of a after += 10: " << a << endl;
    a-= 10;
    cout << "Value of a after -= 10: " << a << endl;
    a*=10;
    cout << "Value of a after *= 10: " << a << endl;
    a/=10;
    cout << "Value of a after /= 10: " << a << endl;
    a%=10;
    cout << "Value of a after %= 10: " << a << endl;
    return 0;
}