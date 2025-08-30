#include "Player.h"

class Exam
{
private:
    const int difficulty;
    int completeness = 0;
    int energy = 100;
    int san = 0;
    int environment = 0;
public:
    Exam(int difficulty_);
    Exam(int difficulty_,Player player);
    int getCompleteness();
    int getEnergy();
    int getSan();
    int getEnvironment();
    void setCompleteness(int val);
    void setEnergy(int val);
    void setSan(int val);
    void setEnvironment(int val);
    ~Exam();
};