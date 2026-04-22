#pragma once 
#include <string>

using namespace std;

class Person
{
    public: 
        Person();
        Person(string newName, float newWeight, int newAge);

        ~Person();

        Person operator+(const Person& otherPerson);

        void setName(string name);
        void setAge(int age);
        void setWeight(float weight);
        float getWeight();

    private:
            float mWeight;
            string mFirstName;
            int mAge;
};
