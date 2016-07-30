#include <iostream>
#include "thsys2.h"
using namespace std;

void thmove(string obj)
{
  if (obj == "Teppich")
  {
    if (System.pos.aktPos == 70)
    {
      System.var.teppich = true;
      print("Du hast den Teppich beisete geraeumt.");
      print("Nun erkennst du auf dem Boden ein Zeichen.");
      print("Es leuchtet in einer dunkelroten Farbe.");
      print("Wenn du dich ihm naeherst, fueehlt es sich");
      print("so an, als würde es dich anziehen.");
      print("Ob du es betreten kannst?");
    }
    else
    {
      print("Objekt existiert nicht!");
    }
  }
  else
  {
    print("Objekt existiert nicht!");
  }
}
