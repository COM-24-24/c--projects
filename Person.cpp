#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(){
    mWeight = 0.0;
    mAge = 0;
    mFirstName = "";
}

Person::Person(string newName, float newWeight, int newAge){
    mFirstName = newName;
    mWeight = newWeight;
    mAge = newAge;
}

Person::~Person(){
    // if neeeded
}

float Person::getWeight(){
    return mWeight;
}

void Person::setName(string name){
    mFirstName = name;
}

void Person::setAge(int age){
    mAge = age;
}

void Person::setWeight(float weight){
    mWeight = weight;
}

Person Person::operator+ (const Person& otherperson){
        Person person;
        person.mWeight = this->mWeight + otherperson.mWeight;
        person.mAge = this->mAge + otherperson.mAge;
        person.mFirstName = this->mFirstName + " " + otherperson.mFirstName;
        return person;
} 