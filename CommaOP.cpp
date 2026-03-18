#include <iostream>
using namespace std;

int main(){
    int i, j;

    j= 10;
    i=(j++, j+100, 999+j); // in this case it will execute all the expression but it will return the last expression value which is 999+j

    cout << i<<"\n";

    return 0;

}