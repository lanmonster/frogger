#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include "Object.h"
#define CAR_SPEED 50;

class Car : public Object
{
private:
    int timer;
public:
    Car()
    {
        timer = CAR_SPEED;
        colNum = 0;
    }
    void drawCar(int);
};

#endif // CAR_H_INCLUDED
