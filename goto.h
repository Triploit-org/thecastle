#include <iostream>
#include <string>
#include "thsys2.h"
#include "look.h"

void nopos();
int r_init();

void gotop(int r)
{
  System.pos.aktPos = System.pos.rooms[System.pos.aktPos][r];
  look(System.pos.aktPos);
}

void nopos()
{
  print("Richtung nicht gefunden?");
}
