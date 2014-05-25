#include "Car.h"

void Car::drawCar(int lane)
{
    p.setColor(red);

    switch(lane)
    {
    case 1:
        rowNum = 29;
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( i < 3 )
            {
                p.plot(i, 29, SQUARE);
            }
            if( i == 3 )
            {
                p.plot(i, 29, LEFT);
            }
            p.plot(i, 30, SQUARE);
        }
        break;

    case 2:
        rowNum = 34;
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( i < 3 )
            {
                p.plot(i, 34, SQUARE);
            }
            if( i == 3 )
            {
                p.plot(i, 34, LEFT);
            }
            p.plot(i, 35, SQUARE);
        }
        break;

    case 3:
        rowNum = 39;
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( i < 3 )
            {
                p.plot(i, 39, SQUARE);
            }
            if( i == 3 )
            {
                p.plot(i, 39, LEFT);
            }
            p.plot(i, 40, SQUARE);
        }
        break;

    case 4:
        rowNum = 44;
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( i < 3 )
            {
                p.plot(i, 44, SQUARE);
            }
            if( i == 3 )
            {
                p.plot(i, 44, LEFT);
            }
            p.plot(i, 45, SQUARE);
        }
        break;

    case 5:
        rowNum = 49;
        colNum = 0;
        for( int i = 0; i < 5; i++ )
        {
            if( i < 3 )
            {
                p.plot(i, 49, SQUARE);
            }
            if( i == 3 )
            {
                p.plot(i, 49, LEFT);
            }
            p.plot(i, 50, SQUARE);
        }
        break;
    }
}
