#ifndef STREET_H_INCLUDED
#define STREET_H_INCLUDED
#include "Car.h"

class Street
{
private:
    Plotter p;

public:
    Car cars[5];
    void drawStreet();
};

#endif // STREET_H_INCLUDED
