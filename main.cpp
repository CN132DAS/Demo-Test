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
    return ratio_vec;
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

    while(!myExam.setPartRatio(inputRatioVector(myExam))){}

    cout<<"Exam begins..."<<endl;
    while(!myExam.isOver()){
        cout<<"======\nPlease act:\n0: rest\n1: solve\n2: strategy\n3: show data\n======="<<endl;
        int op_num;
        cin>>op_num;
        myPlayer->playerAction(op_num,myExam);
    }
    
    if(myExam.getRestTime()>0){
        int a;
    }
    cout<<"Exam finish."<<endl<<"Completeness: "<<myExam.getCompleteness()<<endl;
    return 0;
}