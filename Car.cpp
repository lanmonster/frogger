#include "Car.h"

void Car::drawCar(int lane)
{
    p.setColor(red);
	timer--;
    switch(lane)
    {
    case 0:
        rowNum = CAR_LANE_0;
		if ( timer == 0 )
        {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(black);
            p.plot(colNum - 5, rowNum, SQUARE);
            p.plot(colNum - 5, rowNum + 1, SQUARE);
            p.setColor(red);

			colNum++;

			if( colNum == 85 )
            {
                colNum = 0;
            }

			timer = SPEED;
		}
        break;

    case 1:
        rowNum = CAR_LANE_1;
		if (timer == 0)
        {
            if( colNum == 0 )
            {
                colNum = 85;
            }

            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(black);
            p.plot(colNum + 5, rowNum, SQUARE);
            p.plot(colNum + 5, rowNum + 1, SQUARE);
            p.setColor(red);

			colNum--;

			timer = SPEED;
		}
        break;

    case 2:
        rowNum = CAR_LANE_2;
		if (timer == 0)
        {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(black);
            p.plot(colNum - 5, rowNum, SQUARE);
            p.plot(colNum - 5, rowNum + 1, SQUARE);
            p.setColor(red);

			colNum++;

			if( colNum == 85 )
            {
                colNum = 0;
            }

			timer = SPEED;
		}
        break;

    case 3:
        rowNum = CAR_LANE_3;
		if (timer == 0)
        {
            if( colNum == 0 )
            {
                colNum = 85;
            }

            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(black);
            p.plot(colNum + 5, rowNum, SQUARE);
            p.plot(colNum + 5, rowNum + 1, SQUARE);
            p.setColor(red);

			colNum--;

			timer = SPEED;
		}
        break;

    case 4:
        rowNum = CAR_LANE_4;
		if (timer == 0)
        {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(black);
            p.plot(colNum - 5, rowNum, SQUARE);
            p.plot(colNum - 5, rowNum + 1, SQUARE);
            p.setColor(red);

			colNum++;

			if( colNum == 85 )
            {
                colNum = 0;
            }

			timer = SPEED;
		}
        break;
    }
}
