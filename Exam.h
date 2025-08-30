#include "Player.h"
#include "ExamPart.h"

class Exam
{
private:
    const int difficulty;
    const int partNum;
    int restTime = 0;
    //int completeness = 0;
    int energy = 100;
    int san = 0;
    int environment = 0;
    ExamPart* parts;

public:
    Exam(int difficulty_,int part_num, int time,Player player);
    ~Exam();

    int getCompleteness();
    int getEnergy();
    int getSan();
    int getEnvironment();
    int getRestTime();
    int getDificulty();

    void setEnergy(int val);
    void setSan(int val);
    void setEnvironment(int val);
    void setRestTime(int val);

    void rest();
    
};