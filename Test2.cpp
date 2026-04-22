#include <iostream>

using namespace std;

float Area (float length, float& width);

void Multiply (float inputA, float* inputB, float& result);

int main(){
    float localLength = 2.0f;
    float localWidth = 1.0f;

    float localArea = Area(localLength, localWidth);

    cout << "area: " << localLength << endl;
    cout << "length: " << localLength << endl;
    cout << "width: " << localWidth << endl;

    return 0;

}

float Area (float length, float& width){
    float result = 0.0f;

    Multiply(2.0f, &length, width);

    result = length * width;

    return result;
}

void Multiply(float inputA, float* inputB, float& result){
    *inputB = inputA * *inputB;
    result  = *inputB * 2.0f;
    
}