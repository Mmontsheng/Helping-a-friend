#pragma once
using namespace std;
#include <string>

class UserProfile {
private:
    string name;
    string surname;
    int age;
    double weight;
    double height;
public:
    void createProfile();

    void setName(string name);
    void setSurname(string surname);
    void setAge(int age);
    void setWeight(double weight);
    void setHeight(double height);

    string getName();
    string getSurname();
    int getAge();
    double getWeight();
    double getHeight();
};