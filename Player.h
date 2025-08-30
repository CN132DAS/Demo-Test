#pragma once
#include <iostream>
#include "Exam.h"

class Exam;
class Player
{
private:
    const int ability;
public:
    Player(int ability_);
    ~Player();
    void showPlayerAbility();
    int getPlayerAbility();
    bool playerAction(int type,Exam &_exam);
    void playerRest(Exam &_exam);
    void playerSolve(Exam &_exam);
    void playerStratgy(Exam &_exam);
    void seeExamData(Exam &_exam);
};

