#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "thsys2.h"
using namespace std;

void loadFunction(string src, string OBJ, string repl);

void load_game(string file)
{
  string src;
  ifstream f;
	int is = 0;
	int line = 0;

  f.open(file.c_str());
  while (std::getline(f, src))
  {
  	line++;
    is++;

	  if (StartsWith(src, "pZettel"))
    {
      string position = src;
      replace(position, "pZettel ", "");
      //print("Lade: POSBZ"," = ",position);
      //System.pos.obj.posBZettel = atoi(position);
    }

    else if (StartsWith(src, "pos"))
    {
      string position = src;
      replace(position, "pos ", "");
      //print("Lade: POS"," = ",position);
      //System.pos.aktPos = stoi(position);
    }

    else if (StartsWith(src, "it"))
    {
      string position = src;
      replace(position, "it ", "");
      //print("Lade: ITEM"," = ",position);
      //System.player.Item = position;
    }

    else if (StartsWith(src, "hp"))
    {
      string position = src;
      replace(position, "hp ", "");
      //print("Lade: ITEM"," = ",position);
      //System.player.Health = stoi(position);
    }

    else if (StartsWith(src, "#"))
    {
      // Wenn die Zeile mit einem # beginnt, ist dies ein Kommentar
    }
    else
    {
    	cout << "USERTH: Da ist ein Error in Zeile " << line << endl;
	  }
  }

}

void save_game()
{
	if (remove("user.th") != 0)
	{
		print("Die Datei \"user.th\" konnte nicht geloescht werden! \nBitte tun sie dies manuell und speichern dann erneut!");
	}
	ofstream datei("user.th", ios::app);

	if(!datei.fail())
	{
			print("Speichern...");

			datei << "pZettel " << System.pos.obj.posBZettel << endl;
			datei << "pos " << System.pos.aktPos << endl;
			datei << "it " << System.player.Item << endl;
			datei << "hp " << System.player.Health << endl;
			datei << "posSchluessel " << System.pos.obj.posSchluessel << endl;
			datei << "posKrug " << System.pos.obj.posKrug << endl;
			datei << "posRStein " << System.pos.obj.posRStein << endl;
			datei << "posStein " << System.pos.obj.posStein << endl;
			datei << "posBlatt " << System.pos.obj.posBlatt << endl;

			print("Fertig!");
			datei.close();
	}
	else
	{
		print("Konnte keine neue Spiel-Datei erstellen!");
	}
}

void loadFunction(string src, string OBJ, string repl)
{
  string position = src;
  replace(position, repl, "");
  //print("Lade: ",OBJ," = ",position);
  OBJ = position;
}
