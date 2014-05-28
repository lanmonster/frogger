#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include "Object.h"
#define CAR_LANE_0 29;
#define CAR_LANE_1 34;
#define CAR_LANE_2 39;
#define CAR_LANE_3 44;
#define CAR_LANE_4 49;

class Car : public Object
{
private:
    int timer;
public:
    Car()
    {
        timer = SPEED;
        colNum = 0;
    }
    void drawCar(int);
};

#endif // CAR_H_INCLUDED
