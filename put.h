#include "thsys2.h"

void weg()
{
  print("Objekt auf den Boden gelegt!");
}

int put(string obj)
{
  if (obj == System.obj.BZettel && System.obj.BZettel == System.player.Item)
  {
    weg();
    System.pos.obj.posBZettel = System.pos.aktPos;
    System.player.Item = "";
  }
  else if (obj == System.obj.Stein && System.obj.Stein == System.player.Item)
  {
    weg();
    System.pos.obj.posStein = System.pos.aktPos;
    System.player.Item = "";
  }
  else if (obj == System.obj.Blatt && System.obj.Blatt == System.player.Item)
  {
    weg();
    System.pos.obj.posBlatt = System.pos.aktPos;
    System.player.Item = "";
  }
  else if (obj == System.obj.Krug && System.obj.Krug == System.player.Item)
  {
    weg();
    System.pos.obj.posKrug = System.pos.aktPos;
    System.player.Item = "";
  }
  else if (obj == System.obj.RStein && System.obj.RStein == System.player.Item)
  {
    weg();
    System.pos.obj.posRStein = System.pos.aktPos;
    System.player.Item = "";

    if (System.pos.aktPos == 10 && System.pos.obj.posRStein == System.pos.aktPos)
    {
      if(!System.var.ost11)
        print("Du kannst nun nach Osten gehen.");
      System.var.ost11 = true;
      System.pos.rooms[10][1] = 11;
    }
    else
    {
      System.var.ost11 = false;
      System.pos.rooms[10][1] = 10;
    }
  }
  else if (obj == System.obj.VBlume && System.obj.VBlume == System.player.Item)
  {
    weg();
    System.pos.obj.posVBlume = System.pos.aktPos;
    System.player.Item = "";
  }
  else if (obj == System.obj.Schluessel && System.obj.Schluessel == System.player.Item)
  {
    weg();
    System.pos.obj.posSchluessel = System.pos.aktPos;
    System.player.Item = "";
  }
  else
  {
    print("Dieser Gegenstand befindet sich nicht bei dir!");
  }
}
