#ifndef BOARD_H
#define BOARD_H

class Board
{
    int* ptr;
public:
    Board();
    ~Board();
    Board(const Board& other);
    int SetBoard();
    void GetBoard();
};

#endif // BOARD_H
