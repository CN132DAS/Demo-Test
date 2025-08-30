#include <iostream>
#include "Exam.h"

using namespace std;

Exam::Exam(int difficulty_, int time):difficulty(difficulty_),restTime(time){
    cout<<"Exam difficulty:"<<difficulty<<endl;
}

Exam::Exam(int difficulty_, int time, Player player):difficulty(difficulty_),restTime(time){
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
int Exam::getRestTime(){
    return this->restTime;
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

void Exam::setRestTime(int val){
    this->restTime = val;
}

void Exam::rest(){
    this->energy = this->energy>99?100:(this->energy+1);
    this->environment = this->environment>=-1?this->environment:(this->environment+1);
    this->san = this->san>=-1?this->san:(this->san+1);
}
