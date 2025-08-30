#include "Player.h"

class Exam
{
private:
    const int difficulty;
    int restTime = 0;
    int completeness = 0;
    int energy = 100;
    int san = 0;
    int environment = 0;
public:
    Exam(int difficulty_,int time);
    Exam(int difficulty_,int time,Player player);
    int getCompleteness();
    int getEnergy();
    int getSan();
    int getEnvironment();
    int getRestTime();
    void setCompleteness(int val);
    void setEnergy(int val);
    void setSan(int val);
    void setEnvironment(int val);
    void setRestTime(int val);

    void rest();
    ~Exam();
};