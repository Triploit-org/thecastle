#include "thsys2.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include "goto.h"
#include "look.h"
#include "take.h"
#include "read.h"
#include "save.h"
#include "put.h"

using namespace std;

class Parser
{
private:
  string cmd;
  vector<string> artikel;
  vector<string> position;

public:

  void execute(string cmd[], int i)
  {
    art_add();
    pos_add();

    if(cmd[0] == "n" || cmd[0] == "north" || cmd[0] == "norden")
    {
      gotop(0);
    }
    else if (cmd[0] == "e" || cmd[0] == "east" || cmd[0] == "o" || cmd[0] == "osten")
    {
      gotop(1);
    }
    else if (cmd[0] == "s" || cmd[0] == "south" || cmd[0] == "sueden")
    {
      gotop(2);
    }
    else if (cmd[0] == "w" || cmd[0] == "west" || cmd[0] == "westen")
    {
      gotop(3);
    }
    else if (cmd[0] == "umschauen" || cmd[0] == "schaue" || cmd[0] == "umsehen")
    {
      look(System.pos.aktPos);
    }
    else if (cmd[0] == "nimm" || cmd[0] == "nehme")
    {
      for (int i = 0; i<artikel.size();i++)
      {
        if (artikel[i] == cmd[1])
        {
          take(cmd[2]);
          return;
        }
      }
      System.print("Der Artikel \"", cmd[1], "\" ist mir nicht bekannt!");

    }
    else if (cmd[0] == "lies")
    {
      for (int i = 0; i<artikel.size();i++)
      {
        if (artikel[i] == cmd[1])
        {
          read(cmd[2]);
          return;
        }
      }
      System.print("Der Artikel \"", cmd[1], "\" ist mir nicht bekannt!");
    }
    else if (cmd[0] == "save")
    {
      save_game();
    }
    else if (cmd[0] == "load")
    {
      load_game("user.th");
    }
    else if (cmd[0] == "i" || cmd[0] == "item")
    {
      //print("Position: ",to_string(System.pos.aktPos));
      print("Item: ",System.player.Item);
      //print("Health: ",to_string(System.player.Health), "/10");
    }
    else if (cmd[0] == "wer" || cmd[0] == "wie" || cmd[0] == "was" || cmd[0] == "wieso" || cmd[0] == "weshalb" || cmd[0] == "warum" || cmd[0] == "wo" || cmd[0] == "wann" || cmd[0] == "worueber" || cmd[0] == "womit" || cmd[0] == "wogegen" || cmd[0] == "woher")
    {
      print("Ich bin leider kein Orakel!");
    }
    else if (cmd[0] == "leg" || cmd[0] == "lege")
    {
      for (int i = 0; i<artikel.size();i++)
      {
        if (artikel[i] == cmd[1])
        {
          put(cmd[2]);
          return;
        }
      }
      System.print("Der Artikel \"", cmd[1], "\" ist mir nicht bekannt!");

    }
    else if (cmd[0] == "")
    {

    }
    else if (cmd[0] == "")
    {

    }
    else if (cmd[0] == "")
    {

    }
    else if (cmd[0] == "")
    {

    }
    else if (cmd[0] == "")
    {

    }
    else if (cmd[0] == "q" || cmd[0] == "quit")
    {
      while(true)
      {
        string ans;
        cout << "Moechtest du das Spiel wirklich beenden? [j/n]:";
        cin >> ans;
        if (ans == "j" || ans == "J")
        {
          print("Danke fuers Spielen!");
          cin.sync();
          cin.get();
          exit(0);
        }
        else if (ans == "n" || ans == "N")
        {
          print("OK.");
          break;
        }
        else
        {
          print("Falsche eingabe! Bitte J oder N eingeben!");
        }
      }
    }
    else
    {
        System.print("Das habe ich leider nicht verstanden.");
    }
  }

  string parse()
  {
    while (true)
    {
      string cmds[300];
      int i = 0;
      string c;
      System.var.tmp = System.get(c);
      cin.sync();
      stringstream ssin(System.var.tmp);

      while (ssin.good() && i < 300)
      {
        ssin >> cmds[i];
        ++i;
      }
      cin.sync();
      execute(cmds, i);
    }

    return System.var.tmp;
  }

  void art_add()
  {
    artikel.clear();
    artikel.push_back("zu");
    artikel.push_back("zum");
    artikel.push_back("der");
    artikel.push_back("die");
    artikel.push_back("das");
    artikel.push_back("dem");
    artikel.push_back("den");
    artikel.push_back("ein");
    artikel.push_back("eine");
    artikel.push_back("einen");
    artikel.push_back("dessen");
    artikel.push_back("dessem");
    artikel.push_back("zur");
    artikel.push_back("in");
    artikel.push_back("ins");
    artikel.push_back("");
    artikel.push_back("");
    artikel.push_back("");
    artikel.push_back("");
  }

  void pos_add()
  {
    position.clear();
  }
} Parser;
