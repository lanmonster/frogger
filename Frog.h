#ifndef FROG_H_INCLUDED
#define FROG_H_INCLUDED
#include "Object.h"

class Frog : public Object
{
private:
    char color;
    bool full0, full1, full2, full3, full4;
    int winCount, numLives;

public:
    Frog();
    void drawFrog(char);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void moveLeftWithLog();
    void moveRightWithLog();
    void win();
    void die();
    bool isWinZoneFull(int);
    int getWinCount() { return winCount; };
    int getNumLives() { return numLives; };
    void setNumLives(int lives) { numLives = lives; };
    void setColor();
    char getColor() { return color; };
};

#endif // FROG_H_INCLUDED
