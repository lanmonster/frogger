#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED
#include "Object.h"
#define LOG_LANE_0 3;
#define LOG_LANE_1 8;
#define LOG_LANE_2 13;
#define LOG_LANE_3 18;
#define LOG_LANE_4 23;

class Log : public Object
{
private:
    int timer;

public:
    Log()
    {
        timer = SPEED;
        colNum = 0;
    }
    void drawLog(int);
};

#endif // LOG_H_INCLUDED
