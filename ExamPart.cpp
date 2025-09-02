#include "ExamPart.h"
#include <iostream>

using namespace std;


int ExamPart::getPartCompletedPoint()
{
    return this->completed_point;
}

int ExamPart::getPartExpectedPoint()
{
    return this->expected_point;
}

double ExamPart::getPartSigma()
{
    return this->sigma;
}

void ExamPart::setPartCompletedPoint(int _completed_point)
{
    if(_completed_point >= 0 && _completed_point <= point){
        completed_point = _completed_point;
    }
    else {
        cout <<"INVALID completed_point"<<endl;
    }
    return;
}

void ExamPart::setPartExpectedPoint(int _expected_point)
{
    if(_expected_point >= 0 && _expected_point <= point){
        expected_point = _expected_point;
    }
    else {
        cout <<"INVALID expected_point"<<endl;
    }
    return;
}

void ExamPart::setPartSigma(double _sigma)
{
    if(sigma <0){
        cout<<"negative sigma"<<endl;
        return;
    }
    else {
        sigma = _sigma;
    }
}

void ExamPart::addPartCompletedPoint(int _addition)
{
    if(_addition>=0){
        completed_point += _addition;
    }
    else{
        cout <<"WARNING: negative additon"<<endl;
        completed_point += _addition;
    }

    if(completed_point >= point){
        cout<<"This part finished"<<endl;
        completed_point = point;
        return;
    }
    if(completed_point < 0){
        completed_point = 0;
        return;
    }

}

void ExamPart::addPartExpectedPoint(int _addition)
{

    expected_point += _addition;

    if(expected_point >= point){
        cout<<"Warning: expected point overflowed!"<<endl;
        expected_point = point;
        return;
    }
    if(expected_point < 0){
        cout<<"Warning: expected point negative!"<<endl;
        expected_point = 0;
        return;
    }
}

bool ExamPart::isCompleted()
{
    return (completed_point == point);
}

void ExamPart::printPartData()
{
    //cout<<"ratio: "<<ratio<<" completeness: "<<completeness<<endl;
}
