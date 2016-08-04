#ifndef BOARD_H
#define BOARD_H

class Board
{
    int** ary;
    //int** arycpy;
public:
    Board();
    ~Board();
    Board(const Board& other);
    void fillZeros();
    void PrintBoard();
    void SetBoard();
    int GetBoard();
};

#endif // BOARD_H
