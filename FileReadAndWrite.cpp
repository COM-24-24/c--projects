#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    char data[100];
    String var;

    ofstream outfile;
    outfile.open("afile.txt"); 

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data,100);

    outfile << data<<endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    outfile << data <<endl;
    outfile.close();

    ifstream infile;
    infile.open("afile.txt");

    if (infile.is_open()){
        while (getline(infile, line)){
            cout << line << endl;
        }
    }

    infile.close();

    return 0;
}