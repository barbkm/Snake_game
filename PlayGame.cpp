#include <ncurses.h>
#include <iostream>
#include "Direction.h"
#include "PlayGame.h"

PlayGame::PlayGame(int boardSize) : gameField(boardSize), snake(), apple()
{ apple= new Apple{boardSize}; }



bool PlayGame::stopGame()
{
    if(snake.getPositionsOfSegments()[0].getX()==gameField.getSizeField()+2)
        return true;
    if(snake.getPositionsOfSegments()[0].getX()==0)
        return true;
    if(snake.getPositionsOfSegments()[0].getY()==gameField.getSizeField()+1)
        return true;
    if(snake.getPositionsOfSegments()[0].getY()==0)
        return true;
    for (int snakeSegment=1; snakeSegment<snake.getPositionsOfSegments().size(); snakeSegment++)
        if(snake.getPositionsOfSegments()[0]==snake.getPositionsOfSegments()[snakeSegment])
            return true;
    return false;
}

void PlayGame::startGame()
{
    gameField.drawSnake(snake);
    gameField.drawApple(*apple);
    std::cout << gameField;
    gameField.clearGameField();
    char direction;
    do {
        std::cout<<"Możliwe ruchy to: LEFT, RIGHT, UP, DOWN. Wybierz odpowiedni kierunek: ";
        std::cin >> direction;
        snake.moveSnake(static_cast<Direction>(direction), *apple);
        gameField.drawSnake(snake);
        gameField.drawApple(*apple);
        std::cout << gameField;
        Position pA=apple->getPositionOfApple();

        if(snake.isHeadPositionequalApple(pA))
        {
            delete apple;
            apple= new Apple{gameField.getSizeField()};
        }
        gameField.clearGameField();
    } while (!stopGame());
    std::cout<<"Koniec gry - PRZEGRAŁEŚ";

}




