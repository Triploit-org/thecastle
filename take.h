#ifndef TAKE_H
#define TAKE_H
#include "thsys2.h"

void taked();
void ataked();

int take(string obj)
{

  if (obj == System.obj.BZettel || obj == System.obj.Blatt || obj == System.obj.Stein || obj == System.obj.Krug || obj == System.obj.Schluessel || obj == System.obj.RStein || obj == System.obj.VBlume)
  {
    if (System.obj.BZettel == System.player.Item)
    {
      System.pos.obj.posBZettel = System.pos.aktPos;
    }
    else if (System.obj.Stein == System.player.Item)
    {
      System.pos.obj.posStein = System.pos.aktPos;
    }
    else if (System.obj.Blatt == System.player.Item)
    {
      System.pos.obj.posBlatt = System.pos.aktPos;
    }
    else if (System.obj.Krug == System.player.Item)
    {
      System.pos.obj.posKrug = System.pos.aktPos;
    }
    else if (System.obj.Schluessel == System.player.Item)
    {
      System.pos.obj.posSchluessel = System.pos.aktPos;
    }
    else if (System.obj.RStein == System.player.Item)
    {
      System.pos.obj.posRStein = System.pos.aktPos;
    }
    else if (System.obj.VBlume == System.player.Item)
    {
      System.pos.obj.posVBlume = System.pos.aktPos;
    }

    if (System.pos.obj.posBZettel == System.pos.aktPos && obj == System.obj.BZettel)
    {
      taked();
      System.pos.obj.posBZettel = System.pos.inHand;
      System.player.Item = System.obj.BZettel;
    }
    else if (System.pos.obj.posStein == System.pos.aktPos && obj == System.obj.Stein)
    {
      taked();
      System.pos.obj.posStein = System.pos.inHand;
      System.player.Item = System.obj.Stein;
    }
    else if (System.pos.obj.posBlatt == System.pos.aktPos && obj == System.obj.Blatt)
    {
      taked();
      System.pos.obj.posBlatt = System.pos.inHand;
      System.player.Item = System.obj.Blatt;
    }
    else if (System.pos.obj.posKrug == System.pos.aktPos && obj == System.obj.Krug)
    {
      taked();
      System.pos.obj.posKrug = System.pos.inHand;
      System.player.Item = System.obj.Krug;
    }
    else if (System.pos.obj.posSchluessel == System.pos.aktPos && obj == System.obj.Schluessel)
    {
      taked();
      System.pos.obj.posKrug = System.pos.inHand;
      System.player.Item = System.obj.Schluessel;
    }
    else if (System.pos.obj.posRStein == System.pos.aktPos && obj == System.obj.RStein)
    {
      taked();
      System.pos.obj.posRStein = System.pos.inHand;
      System.player.Item = System.obj.RStein;
    }
    else if (System.pos.obj.posVBlume == System.pos.aktPos && obj == System.obj.VBlume)
    {
      taked();
      System.pos.obj.posVBlume = System.pos.inHand;
      System.player.Item = System.obj.VBlume;
    }
    else
    {
      print("Objekt nicht gefunden!");
      return 1;
    }
  }
  else
  {
    print("Das angegebene Objekt existiert nicht!");
  }

  return 0;
}

void taked()
{
  print("Objekt genommen!");
}
#endif
