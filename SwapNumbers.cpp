#include <iostream>

using namespace std;

void SwapNumbers(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int VarA = 25;
    int VarB = 100;

    cout << "Before swapping: " << VarA<< endl;
    cout << "Before swapping: " << VarB<< endl;

    SwapNumbers(VarA, VarB);

    cout << "After swapping: " << VarA<< endl;
    cout << "After swapping: " << VarB<< endl;

    return 0;

}