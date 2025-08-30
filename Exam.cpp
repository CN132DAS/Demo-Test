#include <iostream>
#include "Exam.h"

using namespace std;

Exam::Exam(int difficulty_):difficulty(difficulty_){
    cout<<"Exam difficulty:"<<difficulty<<endl;
}

Exam::Exam(int difficulty_, Player player):difficulty(difficulty_){
    cout<<"Exam difficulty:"<<difficulty<<endl;
}

Exam::int getCompleteness(){
    return this.completeness;
}

Exam::int getEnergy(){
    return this.energy;
}
Exam::int getSan()[
    return this.san;
]
Exam::int getEnvironment(){
    return this.environment;
}
Exam::void setCompleteness(int val){
    this.completeness = val;
}
Exam::void setEnergy(int val){
    this.energy = val;
}
Exam::void setSan(int val){
    this.val = val;
}
Exam::void setEnvironment(int val){
    this.environment = val;
}
