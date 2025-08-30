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
    else{//maybe useless
        cout<<"No enough time!"<<endl;
    }
}

void Player::playerSolve(Exam &_exam,int part)
{
    int difficulty = _exam.getDifficulty();

    cout<<"Time to spend: ";
    int solveTime;
    cin>>solveTime;

    cout<<"Part to solve: ";
    int part;
    cin >> part;

    int restTime = _exam.getRestTime();
    if(solveTime > restTime){
        _exam.setRestTime(0);
    }
    else{
        _exam.setRestTime(restTime - solveTime);
        _exam.solve(part,solveTime);
    }
}

void Player::playerStratgy(Exam &_exam)
{
    _exam.useStrategy();
}
