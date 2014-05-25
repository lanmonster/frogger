#include <iostream>
#include <fstream>
#include "World.h"
#include "plotter.h"

const int MAX_X = 85;
const int MIN_X = 0;
const int MAX_Y = 53;
const int MIN_Y = 0;

using namespace std;

void World::drawWorld()
{
    setConsoleSize(54, 86);
    p.setColor(magenta);

    for(int i = 0; i < 85; i++)
    {
        p.plot(i, 26, SQUARE);
        p.plot(i, 27, SQUARE);

        p.plot(i, 52, SQUARE);
        p.plot(i, 53, SQUARE);
    }

    s.drawStreet();
    r.drawRiver();

    for( int i = 1; i <= 5; i++ )
    {
        wz[i-1].drawWinZone(i);
    }
}

/***********************
author: Kyle
function:   setConsoleSize(int, int)
input:  an int for rows and and int for columns
desc:   changes the size of the terminal window
***********************/
void World::setConsoleSize(int rows, int columns)
{
   _COORD coord;
   coord.X = columns;
   coord.Y = rows;

   _SMALL_RECT rect;
   rect.Top = 0;
   rect.Left = 0;
   rect.Bottom = rows - 1;
   rect.Right = columns - 1;

   HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleScreenBufferSize(handle, coord);
   SetConsoleWindowInfo(handle, TRUE, &rect);
}

/***********************
author: Kyle
function:   setup()
desc:   displays the start screen
exception:  throws an exception if ifstream can not be opened
***********************/
void World::setup() throw(char const*)
{
    ifstream startScreen("startScreen.txt");
    string sScreen;
    char in;

    if( !startScreen )
    {
        throw "\n\nCan't Find ASCII Art\n\n";
    }

    while( startScreen.get(in) )
    {
        sScreen += in;
    }

    startScreen.close();
    setConsoleSize(28,81);

    cout << sScreen;
}

/***********************
author: Kyle
function:   quit()
desc:   clears screen, displays the end screen
exception:  throws an exception if ifstream can not be opened
***********************/
void World::quit(int lives) throw(char const*)
{
    system("CLS");  //clear screen

    fstream endScreen;

    if( lives > 0 )
    {
        setConsoleSize(35,35);
        endScreen.open("winScreen.txt");
        string wScreen;
        char in;

        while( endScreen.get(in) )
        {
            wScreen += in;
        }

        endScreen.close();

        cout << wScreen;
    }
    else
    {
        setConsoleSize(35,40);
        endScreen.open("loseScreen.txt");
        string lScreen;
        char in;

        while( endScreen.get(in) )
        {
            lScreen += in;
        }

        endScreen.close();

        cout << lScreen;
    }
}

void World::update(char a)
{
    int num = -1;
    bool inWinZone = false;

    for( int i = 0; i < 5 && !inWinZone; i++ )
    {
        if( f.getColNum() > wz[i].getColNum() && f.getColNum() < wz[i].getColNum()+5 )
        {
            if( f.getRowNum() == 3 )
            {
                inWinZone = true;
                num = i;
            }
        }
    }

    switch( a )
    {
    case vk_up:
        if( !wz[num].isFull(num) )
        {
            f.moveUp();
        }
        if( f.getRowNum() == 0 && inWinZone )
        {
            f.win();
            wz[num].fill(num);
        }
        if( f.getRowNum() == 0 && !inWinZone )
        {
            f.die();
        }
        break;

    case vk_down:
        f.moveDown();
        break;

    case vk_left:
        f.moveLeft();
        break;

    case vk_right:
        f.moveRight();
        break;
    }
}
