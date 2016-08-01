#ifndef POSITION_H
#define POSITION_H

class Position
{
    int x, y;
public:
    int TabPosition[10][10];
    Position();
    ~Position();
    Position(const Position& other);
    void GetPosition(int x, int y);
    int SetPosition(int x,int y);
    bool IfPositioningEnded();
    bool IfPlayersPositioningEnded();
};

#endif // POSITION_H
