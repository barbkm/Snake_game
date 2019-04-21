#pragma once
#include <iostream>
#include <vector>
#include "Position.h"
#include "Apple.h"


class Snake
{
    std::vector<Position> positionsOfSegments;

public:
    Snake();


    void updateSnakevector(Position position);
    void moveSnake(Direction direction, Apple &apple);
    void addSegment(Apple &apple);
    bool isHeadPositionequalApple(Position &position);

    const std::vector<Position> &getPositionsOfSegments() const;



};
