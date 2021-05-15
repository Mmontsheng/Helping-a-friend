#include "UserProfile.h"
#include <iostream>


void UserProfile::createProfile() {
    string name;
    string surname;
    int age;
    double weight;
    double height;
    cout << "Enter name: ";
    cin >> name;
    this->setName(name);

    cout << "Enter surname: ";
    cin >> surname;
    this->setSurname(surname);

    cout << "Enter age: ";
    cin >> age;
    this->setAge(age);

    cout << "Enter height: ";
    cin >> height;
    this->setHeight(height);

    cout << "Enter weight: ";
    cin >> weight;
    this->setWeight(weight);
}

// setters
void UserProfile::setName(string name) {
    this->name = name;
}
void UserProfile::setSurname(string surname) {
    this->surname = surname;
}
void UserProfile::setAge(int age) {
    this->age = age;
}
void UserProfile::setWeight(double weight) {
    this->weight = weight;
}
void UserProfile::setHeight(double height) {
    this->height = height;
}

// getters
string UserProfile::getName() {
    return this->name;
}
string UserProfile::getSurname() {
    return this->surname;
}
int UserProfile::getAge() {
    return this->age;
}
double UserProfile::getWeight() {
    return this->weight;
}
double UserProfile::getHeight() {
    return this->height;
}
