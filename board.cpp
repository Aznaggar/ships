#include "board.h"
#include <iostream>

using namespace std;

Board::Board()
{
    int** ary = new int*[10];
    for(int i = 0; i < 10; ++i)
    {
        ary[i] = new int[10];
    }
    cout << "c-tor working..." <<endl;
}

Board::~Board()
{
    for(int i = 0; i < 10; ++i)
    {
        delete [] ary[i];   // przy zmianie na delete ary[i]
    }                       // i 
    delete [] ary;          // delete ary destruktor nie dziala
    cout << "d-tor working..."<<endl;
}

Board::Board(const Board& other)
{
    //**ary=other.ary;
}

void Board::fillZeros()
{
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            ary[i][j]=0;
        }
    }
}

void Board::PrintBoard()
{
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<ary[i][j];
        }
        cout<<endl;
    }
}

int Board::GetBoard()
{
    return (int)ary;
}

void Board::SetBoard()
{

}
