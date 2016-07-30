#include <unistd.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>

#ifndef TH_H
#define TH_H
using namespace std;

bool StartsWith(const string& text,const string& token)
{
	if(text.length() < token.length())
		return false;
	return (text.compare(0, token.length(), token) == 0);
}
bool replace(string& str, const string& from, const string& to) { size_t start_pos = str.find(from); if(start_pos == string::npos) return false; str.replace(start_pos, from.length(), to); return true; }

class Sys
{
private:
public:
  struct positions
  {
    int aktPos = 0;
    int lastPos = 0;
    int inHand = 999;

		int rooms[70][4];

    struct obj
    {
      int posBZettel = 1;
			int posBlatt = 8;
			int posStein = 5;

			int posKrug = 16;
			int posRStein = 7;
			int posSchluessel = 11;

			int posVBlume = 15;
			int posBuch = 16;

    } obj;

  } pos;

	struct obj
	{
		string BZettel = "Zettel";
		string Stein = "Steine";
		string Blatt = "Blaetter";

		string Krug = "Krug";
		string RStein = "Roter-Stein";
		string Schluessel = "Schluessel";

		string VBlume = "Blumen";
		string Teppich = "Teppich";
		string Buch = "Buch";
	} obj;

	struct Player
	{
		int Health = 10;
		string Item;
	} player;

  struct var
  {
     bool run = false;
		 bool stuer = false;
		 bool ost11 = false;
		 bool teppich = false;

     string tmp;
  } var;

  void print(string s, string s1="", string s2="", string s3="", string s4="", string s5="", string s6="", string s7="")
  {
    //cout << s << endl;
    //usleep(200000);

		char a = (char)142;
		char b=(char)148;
		char c=(char)129;

		string ae;
		ae = a;
		string ue;
		ue = b;
		string oe;
		oe = c;

    int num;
    srand (time(NULL));
  	num = rand() % 20000 + 10000;
    s+=s1+s2+s3+s4+s5+s6+s7;

    string::iterator i;
    for (i=s.begin(); i!=s.end(); i++)
    {
        cout << *i;
        usleep(num);
        cin.sync();
    }
    cout << endl;
  }

  char get()
  {
    char c;
    cout << "\n> ";
    c = cin.get();
		cout << endl;
    return c;
  }

  string get(string s)
  {
    cout << "\n> ";
    getline(cin, s);
		cout << endl;
    return s;
  }

} System;

void print(string s, string s1="", string s2="", string s3="", string s4="", string s5="", string s6="", string s7="")
{
	//cout << s << endl;
	//usleep(200000);

	char a = (char)142;
	char b=(char)148;
	char c=(char)129;

	string ae;
	ae = a;
	string ue;
	ue = b;
	string oe;
	oe = c;

	int num;
	srand (time(NULL));
	num = rand() % 20000 + 10000;
	s+=s1+s2+s3+s4+s5+s6+s7;

	string::iterator i;
	for (i=s.begin(); i!=s.end(); i++)
	{
			cout << *i;
			usleep(num);
			cin.sync();
	}
	cout << endl;
}

#endif
