#ifndef RIVER_H_INCLUDED
#define RIVER_H_INCLUDED
#include "Log.h"

class River
{
private:
    Plotter p;

public:
    Log logs[5];
    void drawRiver();
};

#endif // RIVER_H_INCLUDED
