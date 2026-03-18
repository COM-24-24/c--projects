#include <iostream>
using namespace std;

int main(){
    int m= 1;
    char choice;
        cout << "enter your choice(y/n): ";
        cin >> choice;

            for(m>0; m++;){
                if(choice != 'n'){
                    cout << "enter your choice(y/n): ";
                    cin >> choice;
                }
                else{
                    cout << "exit";
                    break;
                }
            }

    return 0;
}