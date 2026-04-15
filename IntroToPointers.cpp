#include <iostream>

using namespace std;

int main(){
    int* pPointer= nullptr;
    int integerVar= 5;

    pPointer= &integerVar;

    cout << "integerVar: " << integerVar << endl;
    
    cout << "Address of integerVar: " << &integerVar << endl;

    cout << "Value of pPointer: " << pPointer << endl;

    cout << "Address pointed to by pPointer: " << &pPointer << endl;

    return 0;
}