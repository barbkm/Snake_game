#include <vector>
#include "Snake.h"

Snake::Snake()
{
    Position head{3,1};
    Position segment1{2,1};
    Position segment2{1,1};
    positionsOfSegments.push_back(head);
    positionsOfSegments.push_back(segment1);
    positionsOfSegments.push_back(segment2);
}

void Snake ::updateSnakevector(Position position)
{
    positionsOfSegments.insert(positionsOfSegments.begin(),position);
    positionsOfSegments.pop_back();
}

bool Snake ::isHeadPositionequalApple(Position &position)
{
    return  positionsOfSegments[0]==position;
}


void Snake::moveSnake(Direction direction, Apple &apple)
{
    auto newPositionOfHead = positionsOfSegments[0]+direction;
    if(newPositionOfHead==apple.getPositionOfApple())
    {
        addSegment(apple);
        return;
    } else
        updateSnakevector(newPositionOfHead);

}

void Snake::addSegment(Apple &apple)
{
    positionsOfSegments.insert(positionsOfSegments.begin(),apple.getPositionOfApple());


}

const std::vector<Position> &Snake::getPositionsOfSegments() const {
    return positionsOfSegments;
}





