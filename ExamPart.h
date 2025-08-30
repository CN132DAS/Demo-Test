#pragma once

class ExamPart {

private:
    int ratio = 0;
    int completeness = 0;

public:
    ExamPart(int _ratio):ratio(_ratio){};
    ExamPart(){};
    ~ExamPart(){};

    int getPartRatio();
    int getPartCompleteness();

    void setPartRatio(int);
    void setPartCompleteness(int);

    void addPartCompleteness(int);

    bool isComplete();

    void printPartData();
};