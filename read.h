#include "thsys2.h"
#include "take.h"

void zettel();

int read(string obj)
{
  if (obj == "Zettel")
  {
    if (System.pos.obj.posBZettel == System.pos.inHand)
    {
      zettel();
    }
    else
    {
      if (take("Zettel") == 0)
      {
        zettel();
      }
    }
  }
  else if (obj == "Denkmal" || obj == "Inschrift")
  {
    if (System.pos.aktPos == 13)
    {
      print("  Denkmal des Grosskaisers Tanukah'");
      print("");
      print("  Einsamkeit ist fuer den Geist, was\n  Fasten fuer den Koerper: toedlich, wenn\n  sie zu lange dauert, und doch notwendig.");
    }
    else
    {
        print("Was versuchst du bitteschoen zu lesen?");
    }
  }
  else if (obj == "Grab" || obj == "Text" || obj == "Inschrift")
  {
    if (System.pos.aktPos == 15)
    {
      print("  Grab der Grosskoenigin Isolde");
      print("");
      print("  Aus dem nichts kamen ihre Werke,\n  da sie nie von ihnen berichten durfte,\n  weil das Pech seine Ohren ueberall hatte. ");
    }
    else
    {
        print("Was versuchst du bitteschoen zu lesen?");
    }
  }
  else
  {
    print("Was versuchst du bitteschoen zu lesen?");
  }
}

void zettel()
{
  print("  Willkommen zu The Castle!");
  print("  Dies ist der Nachfolger des abgebrochenen Spiels\n  \"The House\"! Es ist wieder zurueck!\nDiesmal mit vielen Raeumen und neuen Funktionen! Und nun...\n\n  Viel Spass und Erfolg, Survari");
}
