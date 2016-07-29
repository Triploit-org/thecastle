#include "thsys2.h"
#include <iostream>
#include "parser.h"
#include "rooms.h"
using namespace std;
/*
  ä = \\x84
  ö = \\x94
  ü = \\x81
  ß = \\xe1
*/
int main()
{
#ifdef linux
  system("clear");
#endif
#ifdef _WIN32
  system("cls");
#endif
  rinit();
  System.pos.aktPos = 0;
  look(System.pos.aktPos);
  print("\n Umlaute werden vom Spiel nicht aktzepiert!");

  while(true)
  {
    string inp = Parser.parse();
  }

  return 0;
}
