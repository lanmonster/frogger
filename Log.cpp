//#include "Log.h"
//
//void Log::drawLog(int lane)
//{
//    p.setColor(white);
//
//    switch(lane)
//    {
//    case 1:
////        rowNum = 3;
////        colNum = 0;
////        for( int i = 0; i < 10; i++ )
////        {
////            p.plot(i, 3, SQUARE);
////            p.plot(i, 4, SQUARE);
////        }
//        rowNum = 3;
//        colNum = 0;
//        while( colNum < 85 )
//        {
//            if( colNum == 85 )
//            {
//                colNum = 0;
//            }
//            //Sleep(50);
//            p.plot(colNum, 3, SQUARE);
//            p.plot(colNum, 4, SQUARE);
//            Sleep(50);
//            p.setColor(darkblue);
//            p.plot(colNum-10, 3, SQUARE);
//            p.plot(colNum-10, 4, SQUARE);
//            p.setColor(white);
//            colNum++;
//        }
//        break;
//
//    case 2:
//        rowNum = 8;
//        colNum = 0;
//        while( colNum < 85 )
//        {
//            if( colNum == 85 )
//            {
//                colNum = 0;
//            }
//            //Sleep(50);
//            p.plot(colNum, 8, SQUARE);
//            p.plot(colNum, 9, SQUARE);
//            Sleep(50);
//            p.setColor(darkblue);
//            p.plot(colNum-10, 8, SQUARE);
//            p.plot(colNum-10, 9, SQUARE);
//            p.setColor(white);
//            colNum++;
//        }
//        break;
//
//    case 3:
//        rowNum = 13;
//        colNum = 0;
//        while( colNum < 85 )
//        {
//            if( colNum == 85 )
//            {
//                colNum = 0;
//            }
//            //Sleep(50);
//            p.plot(colNum, 13, SQUARE);
//            p.plot(colNum, 14, SQUARE);
//            Sleep(50);
//            p.setColor(darkblue);
//            p.plot(colNum-10, 13, SQUARE);
//            p.plot(colNum-10, 14, SQUARE);
//            p.setColor(white);
//            colNum++;
//        }
//        break;
//
//    case 4:
//        rowNum = 18;
//        colNum = 0;
//        while( colNum < 85 )
//        {
//            if( colNum == 85 )
//            {
//                colNum = 0;
//            }
//            //Sleep(50);
//            p.plot(colNum, 18, SQUARE);
//            p.plot(colNum, 19, SQUARE);
//            Sleep(50);
//            p.setColor(darkblue);
//            p.plot(colNum-10, 18, SQUARE);
//            p.plot(colNum-10, 19, SQUARE);
//            p.setColor(white);
//            colNum++;
//        }
//        break;
//
//    case 5:
//        rowNum = 23;
//        colNum = 0;
//        while( colNum < 85 )
//        {
//            if( colNum == 85 )
//            {
//                colNum = 0;
//            }
//            //Sleep(50);
//            p.plot(colNum, 23, SQUARE);
//            p.plot(colNum, 24, SQUARE);
//            Sleep(50);
//            p.setColor(darkblue);
//            p.plot(colNum-10, 23, SQUARE);
//            p.plot(colNum-10, 24, SQUARE);
//            p.setColor(white);
//            colNum++;
//        }
//        break;
//    }
//}

#include "Log.h"

void Log::drawLog(int lane)
{
    p.setColor(white);
	// reduce timer counter
	timer--;
    switch(lane)
    {
    case 1:
        rowNum = 3;

		// is timer 0?
		if ( timer == 0 )
        {
			// yes its zero, time to update
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);
            p.setColor(darkblue);
            p.plot(colNum - 10, 3, SQUARE);
            p.plot(colNum - 10, 4, SQUARE);
            p.setColor(white);

			colNum++;

			if (colNum == 85)
            {
                colNum = 0;
            }

			timer = LOG_SPEED; // reset back timer
		}

        break;

    case 2:
        rowNum = 8;
		if (timer == 0) {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

			p.setColor(darkblue);
			p.plot(colNum - 10, 8, SQUARE);
			p.plot(colNum - 10, 9, SQUARE);
			p.setColor(white);
			colNum++;
			if (colNum == 85) colNum = 0;
			timer = LOG_SPEED;
		}
        break;

    case 3:
        rowNum = 13;
		if (timer == 0) {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(darkblue);
            p.plot(colNum-10, 13, SQUARE);
            p.plot(colNum-10, 14, SQUARE);
            p.setColor(white);
            colNum++;
			if (colNum == 85) colNum = 0;
			timer = LOG_SPEED;
        }
        break;

    case 4:
        rowNum = 18;
		if (timer == 0) {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(darkblue);
            p.plot(colNum-10, 18, SQUARE);
            p.plot(colNum-10, 19, SQUARE);
            p.setColor(white);
            colNum++;
			if (colNum == 85) colNum = 0;
			timer = LOG_SPEED;
        }
        break;

    case 5:
        rowNum = 23;
		if (timer == 0) {
            p.plot(colNum, rowNum, SQUARE);
			p.plot(colNum, rowNum + 1, SQUARE);

            p.setColor(darkblue);
            p.plot(colNum-10, 23, SQUARE);
            p.plot(colNum-10, 24, SQUARE);
            p.setColor(white);
            colNum++;
			if (colNum == 85) colNum = 0;
			timer = LOG_SPEED;
        }
        break;
    }
}
