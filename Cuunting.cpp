#include <iostream>
using namespace std;

void Half(float value)
{
    float result = value * 0.5f;
    cout << "Half : " << result << endl;
}

void percentage(float rawValue, float maxVlue)
{
    float percentageresult = (rawValue / maxVlue) * 100.0f;
    cout << "Percentage : " << percentageresult << endl;
    Half(percentageresult);
}

void Multiply(float opOne, float opTwo)
{
    float multresult = opOne*opTwo;
    cout << "Multiply : " << multresult << endl;

    percentage(opOne, opTwo);
}

int main()
{
    float valueOne = 5.0f;
    float valueTwo = 10.0f;

    Multiply(valueOne, valueTwo);

    return 0;
}