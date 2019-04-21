#pragma once
#include <iostream>
#include "Snake.h"

class GameField
{
    int sizeField;
    char **fieldgame;
public:
    GameField(int sizeField);

    friend std::ostream&operator<<(std::ostream& os, const GameField& cv);

    void clearGameField();

    void drawSnake(Snake &snake);

    void drawApple(Apple &apple);

    int getSizeField();

    char **getFieldgame() const;

    void setFieldgame(char **fieldgame);


};

