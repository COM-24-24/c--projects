#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;

    ifstream myfile("example.txt");
    // myfile.close();

    if (myfile.is_open())
    {
        while(getline(myfile, line)){
            /* getline() is a function that reads a line from the input stream
             and stores it in the string variable "line". The loop continues 
             until there are no more lines to read from the file.*/
            cout << line << '\n';
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;
}