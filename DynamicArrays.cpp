#include <iostream>

using namespace std;

int main(){

    double** array1;
    int column = 0;
    int rows = 0;

    cout << "enter the size of your array: ";
    cin >> column;
    
    if (column < 1 || column > 3){
        // cout << "try again, " << "enter the size of your array: ";
        while (column < 1 || column > 3)
        {
            cout << "try again, " << "enter the size of your array: ";
            cin >> column;
        }
        rows = column;
         array1 = new double*[column]; // create an array of pointers to double
            for (int i = 0; i < rows; i++) {
                array1[i] = new double[column]; // allocate memory to each column index
            }
    } else 
    {
        rows = column;
        array1 = new double*[column];
            for (int i = 0; i < rows; i++) {
                array1[i] = new double[column];
            }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < column; j++ ){
            array1[i][j] = j;
            cout << array1[i][j] << " ";
        }
    }
}