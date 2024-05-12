#include "square.h"

int getSquareSides() // actual definition for getSquareSides
{
    return 4;
}

int getSquarePerimeter(int sideLength)
{
    int ans{0}; // ans is declared but not used
    ans = sideLength * getSquareSides(); // ans is not declared
    return ans;
}
