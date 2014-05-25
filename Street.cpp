#include "Street.h"

void Street::drawStreet()
{
    for(int i = 0; i < 85; i++)
    {
        p.setColor(yellow);
        if( i < 5 )
        {
            p.plot(i, 32, SQUARE);
            p.plot(i, 37, SQUARE);
            p.plot(i, 42, SQUARE);
            p.plot(i, 47, SQUARE);
        }

        if( (i >= 10 && i < 15) || (i >= 20 && i < 25) || (i >= 30 && i < 35) || (i >= 40 && i < 45) )
        {
            p.plot(i, 32, SQUARE);
            p.plot(i, 37, SQUARE);
            p.plot(i, 42, SQUARE);
            p.plot(i, 47, SQUARE);
        }

        if( (i >= 50 && i < 55) || (i >= 60 && i < 65) || (i >= 70 && i < 75) || (i >= 80 && i < 85) )
        {
            p.plot(i, 32, SQUARE);
            p.plot(i, 37, SQUARE);
            p.plot(i, 42, SQUARE);
            p.plot(i, 47, SQUARE);
        }
    }
}
