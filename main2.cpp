#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    float totalweight = 0.0f;
    Person Jane = Person("Jane", 60.0f, 30);
    Person John = Person("John", 75.0f, 40);

    totalweight = Jane.getWeight() + John.getWeight();
    cout << "Total weight: " << totalweight << " kg" << endl;

    return 0;
}