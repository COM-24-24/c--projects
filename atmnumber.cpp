#include <iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter a value between 5 and 10\n";
    cin >> a;
// try with while 
    if (!(cin.fail()))
    {
        while (a < 5 || a > 10)
        {
            cout << "You entered " << a<< ". Please enter a value between 5 and 10 \n";
            cin >> a;
        }

        cout << "your input value ("<<a<<") has been accepted. \n";
    } 
    else if (cin.fail())
    {
        cout << "Sorry, you entered an invalid number, please try again \n";
        cin >> a;
        
        while (cin.fail()){
            cout << "Sorry, you entered an invalid number, please try again \n";
            cin.clear();
            cin >> a;
        }
        cout << "your input value ("<<a<<") has been accepted. \n";
    }
    else
        cout << "your input value ("<<a<<") has been accepted. \n";


}
