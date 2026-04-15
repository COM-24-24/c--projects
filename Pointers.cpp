#include <iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondValue;

    int* pPointer= nullptr;

    pPointer = &firstvalue;
    *pPointer = 10; // indirection

    pPointer = &secondValue;
    *pPointer = 20;

    cout << "firstValue is " << firstvalue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}