//Arithematic Operators by USER INPUT
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,g;
    float f;
    cout << "Arithmetic Operators" << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    cout<<"a+b = "<<c << endl;
    cout<<"a-b = "<<d << endl;
    cout<<"a*b = "<<e << endl;
    cout<<"a/b = "<<f << endl;
    cout<<"a%b = "<<g << endl;
    cout << "Increment and Decrement Operators" << endl;
    a++; 
    cout << "a++ = "<<a <<  endl;\
    a--;
    cout << "a-- = "<<a << endl;  
    return 0 ;  
}