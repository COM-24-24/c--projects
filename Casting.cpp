#include <iostream>
using namespace std;

main()
{
    double a= 21.09399;
    float b= 10.20;
    int c;

    c= (int)a; // it will convert double to int and it will return 21
    cout << "Line 1 - Value of (int)a is :"<<c<<endl;

    c = (int)b; // it will convert float to int and it will return 10
    cout << "Line 2 - Value of (int)b is :"<<c<<endl;

    return 0;

}