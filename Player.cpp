#include "Player.h"

using namespace std;

Player::Player(int ability_):ability(ability_)
{
    cout<<"Ability:"<<ability<<endl;
}

Player::~Player()
{
}

void Player::showPlayerAbility(){
    cout << "Player ability: " << ability << endl;
}

int Player::getPlayerAbility(){
    return ability;
}

bool Player::playerAction(int type,Exam &_exam,int part){
    switch (type)
    {
    case 0:
        this->playerRest(_exam);
        return true;
        break;
    case 1:
        this->playerSolve(_exam,part);
        return true;
        break;
    case 2:
        this->playerStratgy(_exam);
        return true;
        break;
    default:
        cout << "Invalid action" <<endl;
        return false;
        break;
    }
}

void Player::playerRest(Exam &_exam)
{
    int restTime = _exam.getRestTime();
    if(restTime >= 1){
        _exam.setRestTime(restTime - 1);
        _exam.rest();
    }
    else{
        cout<<"No enough time!"<<endl;
    }
}

void Player::playerSolve(Exam &_exam,int part)
{
    int difficulty = _exam.getDifficulty();
    cout<<"Time to spend: ";
    int time;
    cin>>time;

}

void Player::playerStratgy(Exam &_exam)
{
    cout<<"You used some kind of stratagy,which made you feel determined."
}
