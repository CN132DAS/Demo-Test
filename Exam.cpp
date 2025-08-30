#include <iostream>
#include "Exam.h"

using namespace std;

Exam::Exam(int difficulty_):difficulty(difficulty_){
    cout<<"Exam difficulty:"<<difficulty<<endl;
}

Exam::Exam(int difficulty_, Player player):difficulty(difficulty_){
    cout<<"Exam difficulty:"<<difficulty<<endl;
}

int Exam::getCompleteness(){
    return this->completeness;
}

int Exam::getEnergy(){
    return this->energy;
}
int Exam::getSan(){
    return this->san;
}
int Exam::getEnvironment(){
    return this->environment;
}
void Exam::setCompleteness(int val){
    this->completeness = val;
}
void Exam::setEnergy(int val){
    this->energy = val;
}
void Exam::setSan(int val){
    this->san = val;
}
void Exam::setEnvironment(int val){
    this->environment = val;
}
