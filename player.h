#ifndef PLAYER_H
#define PLAYER_H

class Player
{

    Player();
    ~Player();
    Player(const Player& other);
    void ChoosePlayer();
    bool CurrentPlayer();
};


#endif // PLAYER_H
