#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"


using namespace std;
namespace shapes {
    class Area {
        public:
            static float calculateSquareArea(shapes::Square& sq){
                return sq.getLength() * sq.getLength();
            }

            static float calculateTriangleArea(shapes::Triangle& tri){
                return 0.5f * tri.getBase() * tri.getHeight();
            }

            static float calculateCircleArea(shapes::Circle& circ){
                return 3.14159f * circ.getRadius() * circ.getRadius();
            }
    };
};

int main()
{
    float sideLength, base, height, radius;
    int option = 0;

    while (option != 4) {
        cout << "Calculate the area of a square: 1 "<< endl;
        cout << "Calculate the area of triangle: 2" << endl;
        cout << "Calculate the area of a circle: 3" << endl;
        cout << "Quit: 4" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            {
                shapes::Square sq;
                cout << "Enter length of square: ";
                cin >> sideLength;
                sq.setLength(sideLength);
                cout << "Area of square is: " << shapes::Area::calculateSquareArea(sq) << endl;
            }
            break;
        case 2:
            {
                shapes::Triangle tri;
                cout << "Enter base and height of triangle: ";
                cin >> base >> height;
                tri.setBase(base);
                tri.setHeight(height);
                cout << "Area of triangle is: " << shapes::Area::calculateTriangleArea(tri) << endl;
            }
            break;
        case 3:
            {
                shapes::Circle circ;
                cout << "Enter radius of circle: ";
                cin >> radius;
                circ.setRadius(radius);
                cout << "Area of circle is: " << shapes::Area::calculateCircleArea(circ) << endl;
            }
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    }

    return 0;
}