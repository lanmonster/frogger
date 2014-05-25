#ifndef WINZONE_H_INCLUDED
#define WINZONE_H_INCLUDED
#include "Object.h"

class WinZone : public Object
{
private:
    bool wz0, wz1, wz2, wz3, wz4;

public:
    void drawWinZone(int);
    void fill(int);
    bool isFull(int);
};

#endif // WINZONE_H_INCLUDED
