#include <iostream>
#include "Player.h"
#include "Exam.h"

using namespace std;

int main(){
    cout<<"Please set your player ability: ";
    int playerAbility = 1;
    cin>>playerAbility;
    Player* myPlayer = new Player(playerAbility);
    cout<<endl;

    cout<<"Please set exam difficulty: ";
    int difficulty = 1;
    cin>>difficulty;
    Exam* myExam = new Exam(difficulty);
    cout<<endl;

    cout<<"Exam begins..."<<endl;
    for(int part = 1;part<=3;part++){
        cout<<"Exam part:"+string(part)<<endl;
    }

    return 0;
}