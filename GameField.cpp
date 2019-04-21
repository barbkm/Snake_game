#include <iostream>
#include <iomanip>
#include "GameField.h"

GameField::GameField(int sizeField) : sizeField(sizeField)
{
    fieldgame = new char*[sizeField+2];
    for(int line=0; line<sizeField+2;line++)
    {
        fieldgame[line]=new char[sizeField+2];
        for (int column = 0; column < sizeField + 3; column++)
        {
            fieldgame[line][column] = ' ';
        }
        fieldgame[line][sizeField+2]='\0';
    }
    for(int line=0; line<sizeField+2;line++)
    {
        for (int column = 0; column < sizeField + 2; column++) {
            fieldgame[0][column] = '=';
            fieldgame[sizeField+1][column] = '=';
        }
    }
}

std::ostream& operator<<(std::ostream& os, const GameField& cv)
{
    for(int line=0; line<cv.sizeField+2;line++)
    {
        os << std::setw(12)<<"||"<<cv.fieldgame[line] <<"||"<< std::endl;
    }
    return os;
}

void GameField::clearGameField()
{
    for(int line=1; line<sizeField+1;line++)
    {
        for (int column = 1; column < sizeField + 1; column++)
        {
            fieldgame[line][column] = ' ';
        }
    }
}

void GameField::drawSnake(Snake &snake)
{
    for(int i=0; i<snake.getPositionsOfSegments().size(); i++)
    {
        int x= snake.getPositionsOfSegments()[i].getX();
        int y=snake.getPositionsOfSegments()[i].getY();
        fieldgame[y][x]='*';
    }
}

void GameField::drawApple(Apple &apple)
{
    fieldgame[apple.getPositionOfApple().getY()][apple.getPositionOfApple().getX()]='*';
}
int GameField:: getSizeField()
{
    return sizeField;
}

