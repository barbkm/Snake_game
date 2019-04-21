#pragma once
#include "Direction.h"


class Position
{
    int x;
    int y;

public:
    Position(int x, int y);

    Position();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    bool operator==(const Position &rhs) const;

    Position operator+(Direction direction) const ;

};



