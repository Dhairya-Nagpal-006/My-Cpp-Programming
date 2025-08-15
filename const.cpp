// const KEYWORD in C++
#include <iostream>
using namespace std;
int main(){
    const float pi = 3.14159;
    const float e = 2.71828;
    cout << "The value of pi is: " << pi << endl;
    cout << "The value of e is: " << e << endl;
    return 0;
    //Here  if we try to allocate any other value to pi or e , it will show an error as they are declared as constants


}