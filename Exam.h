#pragma once
#include "ExamPart.h"
#include <vector>
#include <iostream>

class Player;
class Exam
{
private:
    const int difficulty;
    const int partNum;
    const int totalTime;
    int restTime = 0;
    //int completeness = 0;
    int energy = 100;
    int san = 0;
    int environment = 0;
    ExamPart* parts;

public:
    Exam(int difficulty_,int part_num, int time,Player player);
    ~Exam();

    const int getCompleteness();
    const int getEnergy();
    const int getSan();
    const int getEnvironment();
    const int getRestTime();
    const int getDifficulty();
    const int getPartNum();

    void setEnergy(int val);
    void setSan(int val);
    void setEnvironment(int val);
    void setRestTime(int val);

    bool setPartRatio(std::vector<int>);

    const bool isOver();

    void rest();
    void solve(int,int);
    void useStrategy();

    void printData();
};