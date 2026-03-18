#include <iostream>
using namespace std;

main()
{
    int a= 21;
    int b= 10;
    int c;

    if (a==b){
        cout << "Line 1 - a is equal to b :"<<endl;
    }else {
        cout << "Line 1 - a is not equal to b :"<<endl;
    }

    if (a < b){
        cout << "Line 2 - a is less equal to b :"<<endl;
    }else {
        cout << "Line 1 - a is not less equal to b :"<<endl;
    }

     if (a > b){
        cout << "Line 3 - a is greater to b :"<<endl;
    }else {
        cout << "Line 1 - a is not greater to b :"<<endl;
    }

    a=5;
    b=20;

     if (a<= b){
        cout << "Line 4 - a is either less than \ or equal to b :"<<endl;
    }
    if (b>= a) {
        cout << "Line 5- b is greater than \ or equal to b :"<<endl;
    }
    return 0;
}
