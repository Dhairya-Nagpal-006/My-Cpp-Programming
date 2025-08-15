#include <iostream>
using namespace std;
int main(){
    // Array declaration
    int x[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << x[i]<<endl;
    }
    //Formula to give length of array
    cout << "Length of array: " << sizeof(x)/sizeof(x[0]) << endl;

    return 0;
}