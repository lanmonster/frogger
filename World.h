#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED
#include "plotter.h"
#include "Street.h"
#include "River.h"
#include "Frog.h"
#include "WinZone.h"

class World
{
  private:
    Plotter p;

  public:
    Frog f;
    Street s;
    River r;
    WinZone wz[5];
    void drawWorld();
    void update(char);
    void setConsoleSize(int, int);
    void setup() throw(char const*);
    void quit(int) throw(char const*);
};

#endif // WORLD_H_INCLUDED
