#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED
#include "plotter.h"

class Object
{
protected:
    int rowNum, colNum;
    Plotter p;

public:
    int getRowNum(){ return rowNum; };
    int getColNum(){ return colNum; };
};

#endif // OBJECT_H_INCLUDED
