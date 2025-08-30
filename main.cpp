#include <iostream>
#include "Player.h"
#include "Exam.h"

using namespace std;

vector<int> inputRatioVector(Exam &_exam){
    cout<<"Please set exam parts ratio"<<endl;
    vector<int> ratio_vec;
    for(int part_id = 0; part_id < _exam.getPartNum(); part_id ++){
        cout<<"Part #"<<part_id+1<<" ratio: ";
        int tmp = 0;
        cin >> tmp;
        ratio_vec.push_back(tmp);
    }
}

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

    while(myExam.setPartRatio(inputRatioVector(myExam))){}
    
    cout<<"Exam begins..."<<endl;
    while(!myExam.isOver()){

    }
    
    if(myExam.getRestTime()>0){
        int a;
    }
    cout<<"Exam finish."<<endl<<"Completeness: "<<myExam.getCompleteness()<<endl;
    return 0;
}