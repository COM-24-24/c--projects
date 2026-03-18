#include <iostream> // for cout and endl
#include <vector>
#include <string>
#define PI 3.14159 //globe scope, logic error, 
// macros doen't evaluate

using namespace std;

int main(){
    vector<string> msg {"Hello", "c++", "world", 
                        "from", "vs code",
                        "and the c++ extension"};

    for (const string& word : msg) {
        cout << word << " ";
    }

    cout << endl;
}