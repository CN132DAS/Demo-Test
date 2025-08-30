#include <iostream>
#include "Player.h"
#include "Exam.h"

using namespace std;

int main(){
    cout<<"Please set your player ability: ";
    int playerAbility = 1;
    cin>>playerAbility;
    Player* myPlayer = new Player(playerAbility);

    Exam* myExam = new Exam();

    return 0;
}