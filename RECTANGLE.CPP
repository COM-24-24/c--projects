#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    /* we use constructor to initialize the values
        of length and width when creating an object
        of the Rectangle class.*/
        
    // Rectangle r; constructor without parameters

    float length, width;

    cout << "Enter length and width of the rectangle: "<< endl;
    cin >> length >> width;

    Rectangle r2(length, width); // constructor with parameters
    // r.setValue(length, width);
    cout << "Area of the rectangle: " << r2.getArea() << endl;
    return 0;

}   