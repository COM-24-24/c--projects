#include <iostream>
#include <string>

using namespace std;

int main()
{

    int* dynamic_Int = nullptr;
    string* dynamic_string = nullptr;

    dynamic_Int = new int;
    dynamic_string = new string;

    cout << "Enter an integer value and a string: ";
    cin >> *dynamic_Int >> *dynamic_string;

    cout << "value of dynamic_integer is :" << *dynamic_Int <<endl;
    cout << "value of dynamic_string is :" << *dynamic_string <<endl;

    return 0;
}