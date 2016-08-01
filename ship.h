#ifndef SHIP_H
#define SHIP_H
#include "shiptype.h"

class Ship
{
    int count1, count2, count3, count4;
public:
    Ship();
    ~Ship();
    Ship(const Ship& other);
    int SetShip(SHIPTYPE);
    void GetShip();
};

#endif // SHIP_H
