#include "Position.h"

Position::Position(int x, int y) : x(x), y(y) {}

Position::Position() {}

int Position::getX() const {
    return x;
}

void Position::setX(int x) {
    Position::x = x;
}

int Position::getY() const {
    return y;
}

void Position::setY(int y) {
    Position::y = y;
}


bool Position::operator==(const Position &rhs) const
{
    return x == rhs.x && y == rhs.y;
}

Position Position::operator+(Direction direction) const
{
    switch (direction)
    {
        case LEFT:
            return {x-1,y};
        case RIGHT:
            return {x+1,y};
        case UP:
            return {x,y-1};
        case DOWN:
            return {x,y+1};
    }

}





