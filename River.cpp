#include "River.h"

void River::drawRiver()
{
    p.setColor(darkblue);
    for(int i = 0; i < 85; i++)
    {
        for( int k = 0; k < 26; k++ )
        {
            p.plot(i, k, SQUARE);
        }
    }
}
