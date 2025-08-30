#include <iostream>

using namespace std;

class Player
{
private:
    const int ability;
public:
    Player(int ability_);
    ~Player();
};

Player::Player(int ability_):ability(ability_)
{
    cout<<"Ability:"<<ability<<endl;
}

Player::~Player()
{
}
