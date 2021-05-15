// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "HealthChecker.h"
#include "UserProfile.h"

using namespace std;
void printHealthStatus(UserProfile* userProfile, HealthChecker* diagnosis);
int main()
{

    UserProfile *userProfile = new UserProfile;
    HealthChecker*diagnosis = new HealthChecker;
    cout<<"=====Welcome to HealthChecker====="<<endl;
    userProfile->createProfile();
    diagnosis->checkHealthStatus();
    diagnosis->diagnoseHealthStatus();
    printHealthStatus(userProfile, diagnosis);
    delete diagnosis;
    delete userProfile;
}

void printHealthStatus(UserProfile* userProfile, HealthChecker* diagnosis) {
    cout << "=====PROFILE=====" << endl;
    cout << "Name: "<<userProfile->getName()<<endl;
    cout << "Surname: " << userProfile->getSurname() << endl;
    cout << "Age: " << userProfile->getAge() << endl;
    cout << "Weight: " << userProfile->getWeight() << endl;
    cout << "Height: " << userProfile->getHeight() << endl;
    cout<<"=====HEALTH====="<<endl;
    cout << "Illness: " << diagnosis->getIllness() << endl;
    cout << "Recommendation: " << diagnosis->getRecommendation() << endl;
}

