#include "ExamPart.h"
#include <iostream>

using namespace std;

int ExamPart::getPartRatio()
{
    return this->ratio;
}

int ExamPart::getPartCompleteness()
{
    return this->completeness;
}

void ExamPart::setPartRatio(int _ratio)
{
    if(_ratio > 0 && _ratio <= 100){
        ratio = _ratio;
    }
    else {
        cout <<"INVALID Ratio"<<endl;
    }
    return;
}

void ExamPart::setPartCompleteness(int _completeness)
{
    if(_completeness > 0 && completeness <= 100){
        completeness = _completeness;
    }
    else {
        cout <<"INVALID completeness"<<endl;
    }
    return;
}

void ExamPart::addPartCompleteness(int _addition)
{
    if(_addition>0){
        completeness += _addition;
    }
    else{
        cout <<"INVALID additon, must >0"<<endl;
    }
}

bool ExamPart::isComplete()
{
    return (completeness == 100);
}
