#include <iostream>
#include "Exam.h"

using namespace std;


Exam::Exam(int difficulty_, int part_num, int time, Player player):
partNum    (part_num),
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

int Exam::getCompleteness(){
    double _completeness = 0;
    for(int i = 0; i < partNum; i++){
        _completeness += parts[i].getPartRatio() * parts[i].getPartCompleteness();
    }
    return _completeness;
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

int Exam::getDificulty()
{
    return difficulty;
}

int Exam::getPartNum()
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

void Exam::rest(){
    this->energy = this->energy>99?100:(this->energy+1);
    this->environment = this->environment>=-1?this->environment:(this->environment+1);
    this->san = this->san>=-1?this->san:(this->san+1);
}
