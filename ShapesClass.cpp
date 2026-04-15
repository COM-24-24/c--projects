#include <iostream>
using namespace std;

namespace shapes {
    class Square{
        private:
            float s;
        public:
            Square(){
                s = 0.0;
            }

            Square(float side){
                s = side;
            }
            ~Square() {
                // Destructor code (if needed)
            }
    }

    class Rectangle {
        private:
            float length;
            float width;
        public:
            Rectangle(){
                length = 0.0;
                width = 0.0;
            }

            Rectangle(float l, float w){
                length = l;
                width = w;
            }
            ~Rectangle() {
                // Destructor code (if needed)
            }
    }

    class Circle {
        private:
            float r;
        public:
            Circle(){
                r = 0.0;
            }

            Circle(float radius){
                r = radius;
            }
            ~Circle() {
                // Destructor code (if needed)
            }
        }

    class Area {
        public:
            float calculateSquareArea(shapes::Square& side){
                return side * side;
            }

            float calculateRectangleArea(shapes::Rectangle& rect){
                return rect.getLength() * rect.getWidth();
            }

            float calculateCircleArea(shapes::Circle& circ){
                return 3.14159 * circ.getRadius() * circ.getRadius();
            }
    }
}

int main()
{
    float sideLength, rectLength, rectWidth, circleRadius;

    cout << "Calculate the area of a square: 1 "<< endl;
    cout << "Calculate the area of triangle: 2" << endl;
    cout << "Calculate the area of a rectangle: 3"<< endl;
    cout << "Calculate the area of a circle: 4" << endl;
    cout << "Quit: 5" << endl;

    shapes::Square sq;
    shapes::Rectangle rect;
    shapes::Circle circ;
    shapes::Area area;


    return 0;
}