#include <iostream>
#include "Exam.h"

using namespace std;


Exam::Exam(int difficulty_, int part_num, int time, Player player):
partNum    (part_num),
totalTime  (time),
restTime   (time),
difficulty (difficulty_ > player.getPlayerAbility()? difficulty - player.getPlayerAbility() :1)
{
    parts = new ExamPart[partNum];
    cout<<"Exam part num:"<<part_num<<endl;
    cout<<"Exam difficulty:"<<difficulty<<endl;
    cout<<"Exam time:"<<restTime<<endl;
}

Exam::~Exam()
{
    delete[] parts;
}

const int Exam::getCompleteness(){
    double _completeness = 0;
    for(int i = 0; i < partNum; i++){
        _completeness += parts[i].getPartRatio() * parts[i].getPartCompleteness();
    }
    return _completeness;
}
const int Exam::getEnergy(){
    return this->energy;
}
const int Exam::getSan(){
    return this->san;
}
const int Exam::getEnvironment(){
    return this->environment;
}
const int Exam::getRestTime(){
    return this->restTime;
}

const int Exam::getDifficulty()
{
    return difficulty;
}

const int Exam::getPartNum()
{
    return partNum;
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

bool Exam::setPartRatio(vector<int> ratio_vec)
{
    if (ratio_vec.size() != partNum ){
        cout<<"Error! ratio vec length wrong"<<endl;
        return false;
    }
    else{
        int total_ratio = 0;
        for(int i = 0; i < ratio_vec.size(); i++){
            total_ratio += ratio_vec[i];
        }
        if (total_ratio != 100){
            cout << "Error! total ratio != 100"<<endl;
            return false;
        }
        else {
            for(int i = 0; i < ratio_vec.size(); i++){
                parts[i].setPartRatio(ratio_vec[i]);
            }
            return true;
        }
    }
}

const bool Exam::isOver()
{
    return (restTime <= 0);
}

void Exam::rest(){
    this->energy = this->energy>99?100:(this->energy+1);
    this->environment = this->environment>=-1?this->environment:(this->environment+1);
    this->san = this->san>=-1?this->san:(this->san+1);
    cout<<"Remaining time: "<<restTime<<endl;
}

void Exam::solve(int part, int solveTime)
{
    int addition = (solveTime * 100.0) / (totalTime * 1.0) + 1;
    addition *= (1 - (difficulty/4) *1.0 / 5.0);
    if (energy >= 90){
        addition *= 1.2;
    }
    else if(40<=energy && energy<60){
        addition *= 0.7;
    }
    else if(20<=energy && energy<40){
        addition *= 0.4;
    }
    else if(energy<20){
        addition *= 0;
        cout<<"energy too low!"<<endl;
    }

    if (san >= -5){
        addition *= (1.0 + san * 1.0 / 10.0);
    }
    else{
        addition *= 0;
    }

    addition *= (1.0 + environment * 1.0 / 20.0);

    parts[part].addPartCompleteness(addition);
}

void Exam::useStrategy()
{
    cout<<"You used some kind of strategy,which made you feel determined.";
}