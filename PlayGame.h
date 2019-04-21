#pragma once

#include "Snake.h"
#include "GameField.h"

class PlayGame
{
    GameField gameField;
    Snake snake;
    Apple *apple= nullptr;

public:
    PlayGame( int boardSize);



    bool stopGame();
    void startGame();

    //virtual ~PlayGame();


};

