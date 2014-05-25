#include "WinZone.h"

void WinZone::drawWinZone(int num)
{
    p.setColor(magenta);
    switch(num)
    {
    case 1:
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            p.plot(i, 0, SQUARE);
            p.plot(i, 1, SQUARE);
        }
        break;
    case 2:
        colNum = 20;
        for( int i = 20; i < 25; i++ )
        {
            p.plot(i, 0, SQUARE);
            p.plot(i, 1, SQUARE);
        }
        break;
    case 3:
        colNum = 40;
        for( int i = 40; i < 45; i++ )
        {
            p.plot(i, 0, SQUARE);
            p.plot(i, 1, SQUARE);
        }
        break;
    case 4:
        colNum = 60;
        for( int i = 60; i < 65; i++ )
        {
            p.plot(i, 0, SQUARE);
            p.plot(i, 1, SQUARE);
        }
        break;
    case 5:
        colNum = 80;
        for( int i = 80; i < 85; i++ )
        {
            p.plot(i, 0, SQUARE);
            p.plot(i, 1, SQUARE);
        }
        break;
    }
}

void WinZone::fill(int num)
{
   switch(num)
   {
   case 0:
       wz0 = true;
       break;
   case 1:
       wz1 = true;
       break;
   case 2:
       wz2 = true;
       break;
   case 3:
       wz3 = true;
       break;
   case 4:
       wz4 = true;
       break;
   }
}

bool WinZone::isFull(int num)
{
   switch(num)
   {
   case 0:
       return wz0;

   case 1:
       return wz1;

   case 2:
       return wz2;

   case 3:
       return wz3;

   case 4:
       return wz4;

   default:
       return false;

   }
}
