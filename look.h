#include "thsys2.h"
#ifndef LOOK_H
#define LOOK_H

int aus(int pos);

void look(int pos)
{
  if (pos == 0)
  {
    System.print("Du stehst in einem Wald.\nNoerdlich von dir steht ein Baum, an dem ein Zettel haengt.");
    print("Wenn du dich umschaust, kannst du noch\nein grosses Schloss im Osten erkennen.");

    print("");
  }

  else if (pos == 1)
  {
    print("Du stehst vor einem Baum.\nOestlich von dir siehst du ein grosses Schloss.");

    print("");
  }

  else if (pos == 2)
  {
    print("Du stehst vor einer grossen Tuer.");
    print("Diese grosse Tuer, gehoert zu einem Schloss,\ndas riesig scheind.");

    if(!System.var.stuer)
      print("Die grosse Tuer scheint verschlossen.");

    print("");
  }

  else if (pos == 3)
  {
    print("Du stehst auf einer Lichtung.\nNoerdlich von dir befindet sich das Schloss.");
    print("Wenn du in den Osten schaust, kannst du\nerkennen das der Wald immer tiefer wird....");

    print("");
  }

  else if (pos == 4)
  {
    print("Du befindest dich vor einem grossen Baum,\nwenn du nach Osten blickst, erkennst du etwas rundliches,\naus Stein.");
    print("Im Sueden erkennst du eine weitere Lichtung.");

    print("");
  }

  else if (pos == 5)
  {
    print("Du bist in einer steinigen Gegend angekommen.");
    print("Anstatt Gras, das auf dem Boden wachsen sollte,\nliegen dort nur Steine und Geroell.");
    print("Im Sueden erkennst du eine Leiter.");

    print("");
  }

  else if (pos == 6)
  {
    print("Du stehst vor einer Leiter,\ndiese Leiter, die du im Westen erkennen kannst,\nfuehrt ine in Loch.");

    print("");
  }

  else if (pos == 7)
  {
    print("Du stehst nun in einer Hoehle, die nicht sehr gross ist,\nsie besteht aus einem Raum und in der Mitte kannst du \neine art Altar erkennen.");
    print("Dieser ist aus Sandstein, leicht roetlich und\nbeherbergt einen roten, leicht leuchtenden Stein.");

    print("");
  }

  else if (pos == 8)
  {
    print("Du stehst auf einer Lichtung,\ndiese bietet im oestlichen einen Blick auf einen Fluss.");
    print("Wenn du nach Norden blickst, erkennst du etwas rundliches,\naus Stein.");

    print("");
  }

  else if (pos == 9)
  {
    print("Du stehst an einem Fluss, er ist nicht sehr gross.\nWenn du nach sueden schaust, erkennst du\neine kleine Huette.");

    print("");
  }

  else if (pos == 10)
  {
    print("Du stehst auf einem kleinen Platz, bei dem sich\nder Wald lichtet. Vor dir steht eine Art Saeule, oder etwas");
    print("anderes aus Stein.");
    if (System.pos.obj.posRStein != System.pos.aktPos)
    {
      print("In der Mitte sieht es so aus,");
      print("Als passe etwas rein, etwas unfoermig, steiniges.");
    }

    print("");
  }

  else if (pos == 11)
  {
    print("Du stehst vor einem Art Riesengrab,\ndavor steht ein Stein.");
    print("Im Westen erkennst du die rundliche Steinfoermung.");

    print("");
  }

  else if (pos == 12)
  {
    print("Du befindest dich auf einer Lichtung,\nwieder zwischen Baeume.\nDiese Baeume verbergen ein kleines Huettchen im Osten.");

    print("");
  }

  else if (pos == 13) // Denkmal
  {
    print("Du stehst an einem Denkmal, dies hat eine Inschrift.\nIm Norden erkennst du den Fluss von dem du kamst.\nIm Sueden hingegen, erkennst du einen Friedhof.");

    print("");
  }

  else if (pos == 14)
  {
    print("Du stehst auf einem Friedhof, mit ein paar Graebern.\nDiese Graeber sind alle recht gross, wie fuer\nAdlige und ihresgleichen.\nIm Osten entdeckst du ein riesiges Grab");

    print("");
  }

  else if (pos == 15)
  {
    print("Du stehst vor einem sehr grossen Grab.\nAuf diesem Grab steht ein Text.");
    print("Die Gegend scheint verlasse, nirgendwo ist\nein Mensch, als waere diese Welt, ohne Leben.");

    print("");
  }

  else if (pos == 16) // Haus
  {
    print("Du stehst in einem Haus. Das Haus\nwurde aus ein paar Holzdielen zusammengehaemmert.\nEs knirscht und knarrt, als wuerde es jeden moment einstuertzen. \nIm Westenerkennst du die Tuer.");

    print("");
  }

  else if (pos == 17)
  {
    print("");
  }

  else if (pos == 18)
  {
    print("");
  }

  else if (pos == 19)
  {
    print("");
  }

  else if (pos == 20)
  {
    print("");
  }

  else if (pos == 21)
  {
    print("");
  }

  else if (pos == 22)
  {
    print("");
  }

  else if (pos == 23)
  {
    print("");
  }

  else if (pos == 24)
  {
    print("");
  }

  else if (pos == 25)
  {
    print("");
  }

  else if (pos == 26)
  {
    print("");
  }

  else if (pos == 27)
  {
    print("");
  }

  else if (pos == 28)
  {
    print("");
  }

  else if (pos == 29)
  {
    print("");
  }

  else if (pos == 30)
  {
    print("");
  }

  else if (pos == 31)
  {
    print("");
  }

  else if (pos == 32)
  {
    print("");
  }

  else if (pos == 33)
  {
    print("");
  }

  else if (pos == 34)
  {
    print("");
  }

  else if (pos == 35)
  {
    print("");
  }

  else if (pos == 36)
  {
    print("");
  }

  else if (pos == 37)
  {
    print("");
  }

  else if (pos == 38)
  {
    print("");
  }

  else if (pos == 39)
  {
    print("");
  }

  else if (pos == 40)
  {
    print("");
  }

  else if (pos == 41)
  {
    print("");
  }

  else if (pos == 42)
  {
    print("");
  }

  else if (pos == 43)
  {
    print("");
  }

  else if (pos == 44)
  {
    print("");
  }

  else if (pos == 45)
  {
    print("");
  }

  else if (pos == 46)
  {
    print("");
  }

  else if (pos == 47)
  {
    print("");
  }

  else if (pos == 48)
  {
    print("");
  }

  else if (pos == 49)
  {
    print("");
  }

  else if (pos == 50)
  {
    print("");
  }

  else if (pos == 51)
  {
    print("");
  }

  else if (pos == 52)
  {
    print("Du stehst auf einer Weide, hinter dir");
    print("erstreckt sich eine Mauer.");
    print("Im Norden erkennst du ...");
    print("und suedlich ein ...");

    print("");
  }

  else if (pos == 54)
  {
    print("");
  }

  else if (pos == 60)
  {
    print("");
  }

  else if (pos == 61)
  {
    print("");
  }

  else if (pos == 62)
  {
    print("");
  }

  else if (pos == 63)
  {
    print("");
  }

  else if (pos == 64)
  {
    print("");
  }

  else if (pos == 65)
  {
    print("");
  }

  else if (pos == 66)
  {
    print("");
  }

  else if (pos == 67)
  {
    print("");
  }

  else if (pos == 68)
  {
    print("");
  }

  else if (pos == 69)
  {
    print("");
  }

  else if (pos == 70) // Schloss
  {
    print("Du stehst nun in einem großen Saal.");
    print("Du siehst weder Tueren, noch Fenster oder andere");
    print("Oeffnungen, aber trotzdem ist dieser Raum");
    print("erleuchtet.");
    print("Wenn du den Raum genau betrachtest, merkst du");
    print("Das das leuchten unter dir, unter einem Teppich");
    print("hervorkommt.");
    if (!System.var.teppich)
    {
      print("Ob du den Teppich wegschieben kannst?");
    }
  }

  else
  {
    print("Du befindest dich an einem... nicht existenten Ort!?");
    print("Wer hat da beim Programmieren schonwieder Mist gebaut?");
  }

  if (System.pos.obj.posBlatt == System.pos.aktPos)
  {
     print(" Auf dem Boden liegen Blaetter.");
  }

  if (System.pos.obj.posRStein == System.pos.aktPos)
  {
    if (System.pos.aktPos == 11)
      print(" Es wurde ein \"Roter-Stein\" platziert.");
    else
      print(" Auf dem Boden liegt ein \"Roter-Stein\".");
  }

  if (System.pos.obj.posStein == System.pos.aktPos)
  {
     print(" Auf dem Boden liegen ein paar kleine Steine.");
  }

  if (System.pos.obj.posBZettel == System.pos.aktPos)
  {
     print(" Du kannst einen Zettel erkennen.");
  }

  if (System.pos.obj.posKrug == System.pos.aktPos)
  {
     print(" Du kannst einen Krug erkennen.");
  }

  if (System.pos.obj.posSchluessel == System.pos.aktPos)
  {
     print(" Du kannst einen Schluessel erkennen.");
  }

  if (System.pos.obj.posVBlume == System.pos.aktPos)
  {
     print(" Du kannst \"Verwelkte-Blumen\" erkennen.");
  }

  if (System.pos.obj.posBuch == System.pos.aktPos)
  {
    print(" Auf dem Boden liegt ein halb verschimmeltes Buch.");
  }

  aus(pos);
}

int aus(int pos)
{
  cout << " Du kannst folgende Ausgaenge erkennen: ";
  for (int i = 0; i < 4; i++)
  {
    // nosw

    if (System.pos.rooms[System.pos.aktPos][i] != System.pos.aktPos)
    {
      if (i == 0)
      {
        cout << "norden ";
      }
      else if (i == 1)
      {
        cout << "osten ";
      }
      else if (i == 2)
      {
        cout << "sueden ";
      }
      else
      {
        cout << "westen ";
      }
    }
  }
  cout << endl;

  return 0;
}
#endif
