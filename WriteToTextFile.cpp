#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("example.txt");

    if (myfile.is_open()){
        myfile << "this is a line. \n";
        myfile << "this is another line. \n";
        myfile << "this my code got it \n";
        myfile.close();
    }
    else {
        cout << "Unable to open file";
    }

    return 0;
}