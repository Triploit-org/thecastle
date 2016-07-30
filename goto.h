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

void bettr(string obj)
{
  if (System.pos.aktPos == 70)
  {
    if (obj == "Zeichen" || obj == "Rune" || obj == "Zeichnen" || obj == "Zeiche")
    {
      print("Du stehst nun auf dem Zeichen.");
      print("Dein Koerprer beginnt an zu kribbeln und es");
      print("fuehlt sich so an als wuerde dein Koerper");
      print("vom Zeichen angezogen werden.");
      print("Du bist bewusstlos und als du wieder erwachst,");
      print("Stehst du nicht mehr in dem Schlossm sondern auf einer Weide");
      print("und hinter dir ist eine Mauer.");
      System.pos.aktPos = 62;
    }
    else
    {
      print("Das Objekt wurde nicht gefunden.");
    }
  }
  else
  {
    print("Was willst du da bitteschoen betreten?");
  }
}

void nopos()
{
  print("Richtung nicht gefunden?");
}
