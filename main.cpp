/***************************
Author:         Kyle Lanmon
Date:        2014-05-22
    -commented out undefined functions
    -added start screen
Date:        2014-05-23
    -added drawCar, drawLog, drawFrog
    -created Frog class
Date:       2014-05-29
    -redesign. made classes for everything
    -fix frog move bug
    -created win zones

Date:       2014-05-30
    -fixed win zone bug

TODO
    -make cars/logs move
    -handle collision
    -show number of lives
****************************/

#include <iostream>
#include <fstream>
#include "World.h"
#include "plotter.h"

using namespace std;

int main()
{
    World game;
    try{
        game.setup();
    }catch(char const* x){
        cout << x;
        return 1;
    }

    //wait for spacebar to be pressed
    char ch;
    do
    {
        ch = _getch();
    }while(ch != ' ');

    system("CLS");
    game.drawWorld();

    game.f.drawFrog(game.f.getColor());
    for( int i = 1; i < 6; i++ )
    game.r.logs[i-1].drawLog(i);

    while( ch != 'q' && ch != 'Q' && game.f.getWinCount() != 5 && game.f.getNumLives() > 0)
    {
        if( _kbhit() )
        {
            ch = _getch();
            game.update(ch);
        }
    }

    if( ch == 'q' || ch == 'Q' )
    {
        game.f.setNumLives(-1);
    }

    try{
        game.quit(game.f.getNumLives());
    }catch(char const* x){
        cout << x;
    }

    return 0;
}
