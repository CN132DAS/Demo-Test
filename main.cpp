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
    cout<<endl;

    Exam myExam(difficulty,3,120,*myPlayer);

    cout<<"Exam begins..."<<endl;
    bool flag = false;
    // for(int part = 1;part<=3;part++){
    //     cout<<"Exam part:"<<part<<endl;
    //     cout<<"Select action: ";
    //     int action = -1;
    //     while(true){
    //         cin >> action;
    //         cout << endl;
    //         if()
    //         if(myPlayer->playerAction(action,myExam,part))
    //             break;
    //     }
    // }
    
    if(myExam.getRestTime()>0){
        int a;
    }
    cout<<"Exam finish."<<endl<<"Completeness: "<<myExam.getCompleteness()<<endl;
    return 0;
}