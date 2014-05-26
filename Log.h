#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED
#include "Object.h"
#define LOG_SPEED 30;

class Log : public Object
{
private:
    int timer;

public:
    Log() { timer = LOG_SPEED; };
    void drawLog(int);
};

#endif // LOG_H_INCLUDED
