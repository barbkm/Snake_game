#include <iomanip>
#include "Apple.h"



Apple::Apple(int sizeOfBoard)
{
    position.setX(rand()% sizeOfBoard +1);
    position.setY(rand()% sizeOfBoard +1);

}
Position Apple::getPositionOfApple() { return  position;}

