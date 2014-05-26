/***************************
Author:         Kyle Lanmon
Date:        2014-04-22
    -commented out undefined functions
    -added start screen
Date:        2014-04-23
    -added drawCar, drawLog, drawFrog
    -created Frog class
Date:       2014-04-29
    -redesign. made classes for everything
    -fix frog move bug
    -created win zones

Date:       2014-04-30
    -fixed win zone bug

Date:       2014-05-26
    -make cars/logs move

TODO
    -handle collision
    -show number of lives
****************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "World.h"
#include "plotter.h"

using namespace std;

int main()
{
    int random;
    srand(time(NULL));
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

    while( ch != 'q' && ch != 'Q' && game.f.getWinCount() != 5 && game.f.getNumLives() > 0)
    {
        if( _kbhit() )
        {
            ch = _getch();
            game.update(ch);
        }
        else
		{

			// frog
			game.f.drawFrog(game.f.getColor());
			// logs
			for( int i = 1; i < 6; i++ )
            {
                random = rand() % 5 + 1;
                game.r.logs[random-1].drawLog(random);

                random = rand() % 5 + 1;
                game.s.cars[random-1].drawCar(random);
            }
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
