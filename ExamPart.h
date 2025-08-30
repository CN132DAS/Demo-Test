#pragma

class ExamPart {

private:
    double ratio = 0;
    int completeness = 0;

public:
    ExamPart(double _ratio):ratio(_ratio){};
    ExamPart(){};
    ~ExamPart();

    double getPartRatio();
    int getPartCompleteness();

    void setPartRatio(double);
    void setPartCompleteness(int);

    void addPartCompleteness(int);

    bool isComplete();
};