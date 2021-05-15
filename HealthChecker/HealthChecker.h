#pragma once
#include <string>
using namespace std;

class HealthChecker {
private:
    char symptom;
    string illness;
    string recommendation;
public:
    void diagnoseHealthStatus();
    void checkHealthStatus();
    void setSymptom(char symptom);
    void setIllness(string illness);
    void setRecommendation(string recommendation);
    char getSymptom();
    string getIllness();
    string getRecommendation();
};