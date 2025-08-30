#pragma once
#include <iostream>
#include "Exam.h"

class Player
{
private:
    const int ability;
public:
    Player(int ability_);
    ~Player();
    void showPlayerAbility();
    int getPlayerAbility();
    bool playerAction(int type,Exam &_exam,int part);
    void playerRest(Exam &_exam);
    void playerSolve(Exam &_exam,int part);
    void playerStratgy(Exam &_exam);
};

