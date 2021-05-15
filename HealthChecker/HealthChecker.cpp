#include "HealthChecker.h"
#include <iostream>

enum SYMPTOMS {
    HEADACHE = 'a',
    DIZZINESS = 'b',
    FEVER = 'c',
    HEADACHE_DIZZINESS = 'd',
    HEADACHE_FEVER = 'e',
    DIZZINESS_FEVER = 'f',
    HEADACHE_DIZZINESS_FEVER = 'g'
};

void HealthChecker::checkHealthStatus() {
    char symptom;
    cout << "Select symptom" << endl;
    cout << "a) HEADACHE" << endl;
    cout << "b) DIZZINESS" << endl;
    cout << "c) FEVER" << endl;
    cout << "d) HEADACHE + DIZZINESS" << endl;
    cout << "e) HEADACHE + FEVER" << endl;
    cout << "f) DIZZINESS + FEVER" << endl;
    cout << "g) HEADACHE + DIZZINESS + FEVER" << endl;
    cin >> symptom;
    this->setSymptom((SYMPTOMS)symptom);
}

void HealthChecker::diagnoseHealthStatus() {
    switch (this->symptom)
    {
        case HEADACHE:
            this->setIllness("Fatigue");
            this->setRecommendation("*Take a rest");
            break;
        case DIZZINESS:
            this->setIllness("Fever Likely");
            this->setRecommendation("*Use pain-killers");
            break;
        case FEVER:
            this->setIllness("Infection likely present");
            this->setRecommendation("*Visit a GP");
            break;
        case HEADACHE_DIZZINESS:
            this->setIllness("Fatigue");
            this->setRecommendation("*Visit a GP");
            break;
        case HEADACHE_FEVER:
            this->setIllness("Infection likely present");
            this->setRecommendation("*Use pain-killers and visit GP after");
            break;
        case DIZZINESS_FEVER:
            this->setIllness("Infection likely present");
            this->setRecommendation("*Use pain-killers and visit GP after");
            break;
        case HEADACHE_DIZZINESS_FEVER:
            this->setIllness("Infection likely present");
            this->setRecommendation("*Use pain-killers and visit GP after");
            break;
        default:
            cout<<"Invalid symptom option"<<endl;
            break;
    }
}

void HealthChecker::setSymptom(char symptom) {
    this->symptom = symptom;
}

void HealthChecker::setIllness(string illness) {
    this->illness = illness;
}
void HealthChecker::setRecommendation(string recommendation) {
    this->recommendation = recommendation;
}

char HealthChecker::getSymptom() {
    return this->symptom;
}
string HealthChecker::getIllness() {
    return illness;
}
string HealthChecker::getRecommendation() {
    return recommendation;
}