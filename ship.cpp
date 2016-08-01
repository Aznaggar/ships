#include "ship.h"

Ship::Ship()
{

}

Ship::~Ship()
{
    //delete ;
}

int Ship::SetShip(SHIPTYPE _ship)
{
    switch(_ship)
    {
    case 1:
        _ship=one;
        count1++;
        break;
    case 2:
        _ship=two;
        count2++;
        break;
    case 3:
        _ship=three;
        count3++;
        break;
    case 4:
        _ship=four;
        count4++;
        break;
    default:
        _ship=five;
        break;
    }
    return _ship;
}

void Ship::GetShip()
{

}

/*
przekazywanie do obiektu
1) obiekt musi istniec
*/
