#include <iostream>
using namespace std;

int add(int a, int b)
{
    int r= a+b;
        cout <<r<<endl;
    int n= a-b;
        cout <<n<<endl;

    return r+n;
}
int main()
{
  int var= 10;
  int num= 5;

    cout<< add(var,num)<<endl;

    return 0;
}