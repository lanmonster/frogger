#include "Log.h"

void Log::drawLog(int lane)
{
    p.setColor(white);
	timer--;
    switch(lane)
    {
    case 0:
        rowNum = LOG_LANE_0;
		if( timer == 0 )
        {
            if( colNum == 0 )
            {
                colNum = 85;
            }

            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

			p.setColor(darkblue);
            p.plot(colNum + 10, rowNum, SQUARE);
            p.plot(colNum + 10, rowNum+1, SQUARE);
			p.setColor(white);

			colNum--;

			timer = SPEED;
		}
        break;

    case 1:
        rowNum = LOG_LANE_1;
		if( timer == 0 )
        {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

			p.setColor(darkblue);
            p.plot(colNum - 10, rowNum, SQUARE);
            p.plot(colNum - 10, rowNum+1, SQUARE);
			p.setColor(white);

			colNum++;

			if( colNum == 85 )
            {
                colNum = 0;
            }

			timer = SPEED;
		}
        break;

    case 2:
        rowNum = LOG_LANE_2;
		if( timer == 0 )
        {
            if( colNum == 0 )
            {
                colNum = 85;
            }

            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

			p.setColor(darkblue);
            p.plot(colNum + 10, rowNum, SQUARE);
            p.plot(colNum + 10, rowNum + 1, SQUARE);
			p.setColor(white);

			colNum--;

			timer = SPEED;
		}
        break;

    case 3:
        rowNum = LOG_LANE_3;
		if( timer == 0 )
        {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(darkblue);
            p.plot(colNum - 10, rowNum, SQUARE);
            p.plot(colNum - 10, rowNum + 1, SQUARE);
            p.setColor(white);

            colNum++;

			if( colNum == 85 )
            {
                colNum = 0;
			}

			timer = SPEED;
        }
        break;

    case 4:
        rowNum = LOG_LANE_4;
        if( timer == 0 )
        {
            if( colNum == 0 )
            {
                colNum = 85;
            }

            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

			p.setColor(darkblue);
            p.plot(colNum + 10, rowNum, SQUARE);
            p.plot(colNum + 10, rowNum + 1, SQUARE);
			p.setColor(white);

			colNum--;

			timer = SPEED;
		}
        break;
    }
}
