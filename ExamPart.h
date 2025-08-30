#pragma

class ExamPart {

private:
    int ratio = 0;
    int completeness = 0;
public:
    int getPartRatio();
    int getPartCompleteness();

    void setPartRatio(int);
    void setPartCompleteness(int);

    void addPartCompleteness(int);

    bool isComplete();
};