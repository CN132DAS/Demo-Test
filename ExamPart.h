#pragma once

class ExamPart {

public:
    const int point = 0;
    const int difficulty = 1;
    const int player_ability;

private:
    
    int completed_point = 0;
    int expected_point = 0;
    double sigma = 0;

public:
    ExamPart(int _point, int _difficulty, int _ability):
    point(_point),
    player_ability(_ability),
    difficulty(_difficulty)
    {};
    
    ~ExamPart(){};

    //get functions
    int getPartCompletedPoint();
    int getPartExpectedPoint();
    double getPartSigma();

    //set functions
    void setPartCompletedPoint(int);
    void setPartExpectedPoint(int);
    void setPartSigma(double);

    //change functions
    void addPartCompletedPoint(int);
    void addPartExpectedPoint(int);

    bool isCompleted();

    void printPartData();
};