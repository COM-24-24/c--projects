#include <iostream>
using namespace std;

main()
{
    unsigned int a= 60;
    unsigned int b= 13;
    int c=0;

    c= a & b;
    cout << "Line 1 - Value of c is :"<<c<<endl; // if both bit are 1 then it will return 1 otherwise it will return 0

    c= a | b;
    cout << "Line 2 - Value of c is :"<<c<<endl; // if both bit are 0 then it will return 0 otherwise it will return 1

    c= a^b;
    cout << "Line 3 - Value of c is :"<<c<<endl; // if both bit are same then it will return 0 otherwise it will return 1

    c= ~a;
    cout << "Line 4 - Value of c is :"<<c<<endl; // invert all bit of a and fill 0 in left

    c= a << 2;
    cout << "Line 5 - Value of c is :"<<c<<endl; //move all bit by 2 position to left and fill 0 in right

    c= a >> 2;
    cout << "Line 6 - Value of c is :"<<c<<endl; // move all bit by 2 position to right and fill 0 in left if a is unsigned and fill 1 in left if a is signed and fill 0 in right


    return 0;
}