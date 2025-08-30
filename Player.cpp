#include "player.h"

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

bool Player::playerAction(int type,Exam &_exam){
    switch (type)
    {
    case 0:
        this->playerRest(_exam);
        return true;
        break;
    case 1:
        this->playerSolve(_exam);
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

}

void Player::playerSolve(Exam &_exam)
{

}

void Player::playerStratgy(Exam &_exam)
{
    
}
