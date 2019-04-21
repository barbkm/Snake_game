#include <iostream>
#include "GameField.h"
#include "PlayGame.h"

int main()
{
    PlayGame playGame{10};
    playGame.startGame();
    return 0;
}