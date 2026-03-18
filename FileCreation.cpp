#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Myfile("exampleFile.txt"); // Myfile is an object of the ofstream class, which is used to create files and write information to files.

    // fstream outfile;
    // outfile.open("exampleFile.txt", ios::out);

    
    Myfile.close();

    return 0;
}