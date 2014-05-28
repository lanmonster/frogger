#include <iostream>
#include "Frog.h"
#include "plotter.h"

const int MAX_COL = 81;
const int MIN_COL = 1;
const int MAX_ROW = 52;
const int MIN_ROW = 0;

Frog::Frog()
{
    color = 'g';
    winCount = 0;
    numLives = 5;
    rowNum = 52;
    colNum = 41;
}

void Frog::moveUp()
{
    setColor();
    drawFrog(color);

    if( rowNum > MIN_ROW )
    {
        if( rowNum == 52 || rowNum == 29 || rowNum == 26 || rowNum == 3 )
        {
            rowNum -= 3;
        }
        else
        {
            rowNum -= 5;
        }
    }

    color = 'g';
    drawFrog(color);
}

void Frog::moveDown()
{
    setColor();
    drawFrog(color);

    if( rowNum < MAX_ROW && rowNum  > 2 )
    {
        if( rowNum == 49 || rowNum == 26 || rowNum == 23 )
        {
            rowNum += 3;
        }
        else
        {
            rowNum += 5;
        }
    }

    color = 'g';
    drawFrog(color);
}

void Frog::moveLeft()
{
    setColor();
    drawFrog(color);

    if( colNum > MIN_COL )
    {
        colNum -= 5;
    }

    color = 'g';
    drawFrog(color);
}

void Frog::moveRight()
{
    setColor();
    drawFrog(color);

    if( colNum < MAX_COL )
    {
        colNum += 5;
    }

    color = 'g';
    drawFrog(color);
}

void Frog::setColor()
{
    if( rowNum == 52 || rowNum == 26 )
    {
        color = 'm';
    }
    if( rowNum > 26 && rowNum < 52 )
    {
        color = 'b';
    }
    if( rowNum > -1 && rowNum < 26 )
    {
        color = 'd';
    }
}

void Frog::drawFrog( char c )
{
    if( winCount < 5 )
    {
        switch(c)
        {
        case 'm':
            p.setColor(magenta);
            break;
        case 'b':
            p.setColor(black);
            break;
        case 'd':
            p.setColor(darkblue);
            break;
        case 'w':
            p.setColor(white);
            break;
        default:
            p.setColor(darkgreen);
            break;
        }

        for( int i = colNum; i < colNum + 3; i++ )
        {
            p.plot(i, rowNum, SQUARE);
            p.plot(i, rowNum+1, SQUARE);
        }
    }
}

void Frog::win()
{
    if( winCount < 5 )
    {
        winCount++;
    }

    color = 'g';
    rowNum = 52;
    colNum = 41;
    drawFrog(color);
}

void Frog::die()
{
    //show a big red X on the screen
    setColor();
    drawFrog(color);

    numLives--;

    color = 'g';
    rowNum = 52;
    colNum = 41;
    drawFrog(color);
}
