#include <iostream>
using namespace std;

main()
{
    int a= 21;
    int c;


    c= a;
    cout << "Line 1 - Value of c is :"<<c<<endl;

    c += a;
    cout << "Line 2 - Value of c is :"<<c<<endl;

    c-= a;
    cout << "Line 3 - Value of c is :"<<c<<endl;

    c*= a;
    cout << "Line 4 - Value of c is :"<<c<<endl;

    c/= a;
    cout << "Line 5 - Value of c is :"<<c<<endl;

    c= 200;
    c%= a;
    cout << "Line 6 - Value of c is :"<<c<<endl;

    c&= a;
    cout << "Line 7 - Value of c is :"<<c<<endl;

    c^= a;
    cout << "Line 8 - Value of c is :"<<c<<endl;

    c|= a;
    cout << "Line 9 - Value of c is :"<<c<<endl;

    c<<= 2;
    cout << "Line 10 - Value of c is :"<<c<<endl;

    c>>= 2;
    cout << "Line 11 - Value of c is :"<<c<<endl;
    
    return 0;
}