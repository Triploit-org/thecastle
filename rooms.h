#include "thsys2.h"

int rinit()
{
  // 0 norden
  // 1 osten
  // 2 süden
  // 3 westen

  System.pos.rooms[0][0] = 1; // norden
  System.pos.rooms[0][1] = 2; // osten
  System.pos.rooms[0][2] = 0; // süden
  System.pos.rooms[0][3] = 0; // westen

  System.pos.rooms[1][0] = 1; // norden
  System.pos.rooms[1][1] = 2; // osten
  System.pos.rooms[1][2] = 0; // süden
  System.pos.rooms[1][3] = 1; // westen

  System.pos.rooms[2][0] = 1; // ...
  System.pos.rooms[2][1] = 2;
  System.pos.rooms[2][2] = 3;
  System.pos.rooms[2][3] = 0;

  System.pos.rooms[3][0] = 2;
  System.pos.rooms[3][1] = 4;
  System.pos.rooms[3][2] = 5;
  System.pos.rooms[3][3] = 3;

  System.pos.rooms[4][0] = 2;
  System.pos.rooms[4][1] = 10;
  System.pos.rooms[4][2] = 8;
  System.pos.rooms[4][3] = 3;

  System.pos.rooms[5][0] = 3;
  System.pos.rooms[5][1] = 5;
  System.pos.rooms[5][2] = 6;
  System.pos.rooms[5][3] = 5;

  System.pos.rooms[6][0] = 5;
  System.pos.rooms[6][1] = 6;
  System.pos.rooms[6][2] = 6;
  System.pos.rooms[6][3] = 7;

  System.pos.rooms[7][0] = 7;
  System.pos.rooms[7][1] = 6;
  System.pos.rooms[7][2] = 7;
  System.pos.rooms[7][3] = 7;

  System.pos.rooms[8][0] = 10;
  System.pos.rooms[8][1] = 9;
  System.pos.rooms[8][2] = 8;
  System.pos.rooms[8][3] = 8;

  System.pos.rooms[9][0] = 9;
  System.pos.rooms[9][1] = 9;
  System.pos.rooms[9][2] = 12;
  System.pos.rooms[9][3] = 8;

  System.pos.rooms[10][0] = 10;
  System.pos.rooms[10][1] = 10;
  System.pos.rooms[10][2] = 8;
  System.pos.rooms[10][3] = 4;

  System.pos.rooms[11][0] = 11;
  System.pos.rooms[11][1] = 11;
  System.pos.rooms[11][2] = 11;
  System.pos.rooms[11][3] = 10;

  System.pos.rooms[12][0] = 9;
  System.pos.rooms[12][1] = 16;
  System.pos.rooms[12][2] = 12;
  System.pos.rooms[12][3] = 13;

  System.pos.rooms[13][0] = 9;
  System.pos.rooms[13][1] = 12;
  System.pos.rooms[13][2] = 14;
  System.pos.rooms[13][3] = 13;

  System.pos.rooms[14][0] = 13;
  System.pos.rooms[14][1] = 15;
  System.pos.rooms[14][2] = 14;
  System.pos.rooms[14][3] = 14;

  System.pos.rooms[15][0] = 15;
  System.pos.rooms[15][1] = 15;
  System.pos.rooms[15][2] = 15;
  System.pos.rooms[15][3] = 14;

  System.pos.rooms[16][0] = 16;
  System.pos.rooms[16][1] = 16;
  System.pos.rooms[16][2] = 16;
  System.pos.rooms[16][3] = 12;

  System.pos.rooms[17][0] = 18;
  System.pos.rooms[17][1] = 17;
  System.pos.rooms[17][2] = 19;
  System.pos.rooms[17][3] = 17;

  System.pos.rooms[18][0] = 32;
  System.pos.rooms[18][1] = 24;
  System.pos.rooms[18][2] = 17;
  System.pos.rooms[18][3] = 21;

  System.pos.rooms[19][0] = 19;
  System.pos.rooms[19][1] = 24;
  System.pos.rooms[19][2] = 20;
  System.pos.rooms[19][3] = 17;

  System.pos.rooms[20][0] = 19;
  System.pos.rooms[20][1] = 20;
  System.pos.rooms[20][2] = 25;
  System.pos.rooms[20][3] = 26;

  System.pos.rooms[21][0] = 44;
  System.pos.rooms[21][1] = 32;
  System.pos.rooms[21][2] = 18;
  System.pos.rooms[21][3] = 41;

  System.pos.rooms[22][0] = 21;
  System.pos.rooms[22][1] = 29;
  System.pos.rooms[22][2] = 18;
  System.pos.rooms[22][3] = 22;

  /***System.pos.rooms[23][0] = 0;
    System.pos.rooms[23][1] = 0;
    System.pos.rooms[23][2] = 0;
  System.pos.rooms[23][3] = 0;***/

  System.pos.rooms[24][0] = 18;
  System.pos.rooms[24][1] = 24;
  System.pos.rooms[24][2] = 24;
  System.pos.rooms[24][3] = 19;

  System.pos.rooms[25][0] = 20;
  System.pos.rooms[25][1] = 25;
  System.pos.rooms[25][2] = 26;
  System.pos.rooms[25][3] = 25;

  System.pos.rooms[26][0] = 20;
  System.pos.rooms[26][1] = 25;
  System.pos.rooms[26][2] = 26;
  System.pos.rooms[26][3] = 27;

  System.pos.rooms[27][0] = 27;
  System.pos.rooms[27][1] = 26;
  System.pos.rooms[27][2] = 27;
  System.pos.rooms[27][3] = 28;

  System.pos.rooms[28][0] = 35;
  System.pos.rooms[28][1] = 27;
  System.pos.rooms[28][2] = 38;
  System.pos.rooms[28][3] = 40;

  System.pos.rooms[29][0] = 38;
  System.pos.rooms[29][1] = 39;
  System.pos.rooms[29][2] = 29;
  System.pos.rooms[29][3] = 30;

  System.pos.rooms[30][0] = 38;
  System.pos.rooms[30][1] = 29;
  System.pos.rooms[30][2] = 30;
  System.pos.rooms[30][3] = 32;

  System.pos.rooms[31][0] = 37;
  System.pos.rooms[31][1] = 38;
  System.pos.rooms[31][2] = 31;
  System.pos.rooms[31][3] = 31;

  System.pos.rooms[32][0] = 32;
  System.pos.rooms[32][1] = 30;
  System.pos.rooms[32][2] = 32;
  System.pos.rooms[32][3] = 33;

  System.pos.rooms[33][0] = 33;
  System.pos.rooms[33][1] = 32;
  System.pos.rooms[33][2] = 33;
  System.pos.rooms[33][3] = 33;

  System.pos.rooms[34][0] = 36;
  System.pos.rooms[34][1] = 37;
  System.pos.rooms[34][2] = 31;
  System.pos.rooms[34][3] = 34;

  System.pos.rooms[35][0] = 35;
  System.pos.rooms[35][1] = 35;
  System.pos.rooms[35][2] = 35;
  System.pos.rooms[35][3] = 36;

  System.pos.rooms[36][0] = 36;
  System.pos.rooms[36][1] = 35;
  System.pos.rooms[36][2] = 34;
  System.pos.rooms[36][3] = 36;

  System.pos.rooms[37][0] = 34;
  System.pos.rooms[37][1] = 34;
  System.pos.rooms[37][2] = 31;
  System.pos.rooms[37][3] = 34;

  System.pos.rooms[38][0] = 38;
  System.pos.rooms[38][1] = 29;
  System.pos.rooms[38][2] = 30;
  System.pos.rooms[38][3] = 30;

  System.pos.rooms[39][0] = 39;
  System.pos.rooms[39][1] = 40;
  System.pos.rooms[39][2] = 28;
  System.pos.rooms[39][3] = 29;

  System.pos.rooms[40][0] = 39;
  System.pos.rooms[40][1] = 40;
  System.pos.rooms[40][2] = 28;
  System.pos.rooms[40][3] = 40;

  System.pos.rooms[41][0] = 45;
  System.pos.rooms[41][1] = 44;
  System.pos.rooms[41][2] = 21;
  System.pos.rooms[41][3] = 41;

  System.pos.rooms[42][0] = 43;
  System.pos.rooms[42][1] = 48;
  System.pos.rooms[42][2] = 42;
  System.pos.rooms[42][3] = 47;

  System.pos.rooms[43][0] = 47;
  System.pos.rooms[43][1] = 42;
  System.pos.rooms[43][2] = 43;
  System.pos.rooms[43][3] = 43;

  System.pos.rooms[44][0] = 44;
  System.pos.rooms[44][1] = 44;
  System.pos.rooms[44][2] = 21;
  System.pos.rooms[44][3] = 41;

  System.pos.rooms[45][0] = 49;
  System.pos.rooms[45][1] = 45;
  System.pos.rooms[45][2] = 41;
  System.pos.rooms[45][3] = 45;

  System.pos.rooms[46][0] = 49;
  System.pos.rooms[46][1] = 47;
  System.pos.rooms[46][2] = 46;
  System.pos.rooms[46][3] = 46;

  System.pos.rooms[47][0] = 47;
  System.pos.rooms[47][1] = 43;
  System.pos.rooms[47][2] = 42;
  System.pos.rooms[47][3] = 46;

  System.pos.rooms[48][0] = 48;
  System.pos.rooms[48][1] = 48;
  System.pos.rooms[48][2] = 42;
  System.pos.rooms[48][3] = 48;

  System.pos.rooms[49][0] = 49;
  System.pos.rooms[49][1] = 46;
  System.pos.rooms[49][2] = 45;
  System.pos.rooms[49][3] = 50;

  System.pos.rooms[50][0] = 50;
  System.pos.rooms[50][1] = 49;
  System.pos.rooms[50][2] = 50;
  System.pos.rooms[50][3] = 54;

  System.pos.rooms[51][0] = 54;
  System.pos.rooms[51][1] = 51;
  System.pos.rooms[51][2] = 51;
  System.pos.rooms[51][3] = 65;

  System.pos.rooms[54][0] = 50;
  System.pos.rooms[54][1] = 51;
  System.pos.rooms[54][2] = 65;
  System.pos.rooms[54][3] = 54;

  System.pos.rooms[60][0] = 61;
  System.pos.rooms[60][1] = 62;
  System.pos.rooms[60][2] = 60;
  System.pos.rooms[60][3] = 60;

  System.pos.rooms[61][0] = 68;
  System.pos.rooms[61][1] = 63;
  System.pos.rooms[61][2] = 62;
  System.pos.rooms[61][3] = 69;

  System.pos.rooms[62][0] = 61;
  System.pos.rooms[62][1] = 62;
  System.pos.rooms[62][2] = 64;
  System.pos.rooms[62][3] = 60;

  System.pos.rooms[63][0] = 67;
  System.pos.rooms[63][1] = 66;
  System.pos.rooms[63][2] = 63;
  System.pos.rooms[63][3] = 61;

  System.pos.rooms[64][0] = 62;
  System.pos.rooms[64][1] = 64;
  System.pos.rooms[64][2] = 64;
  System.pos.rooms[64][3] = 64;

  System.pos.rooms[65][0] = 54;
  System.pos.rooms[65][1] = 51;
  System.pos.rooms[65][2] = 62;
  System.pos.rooms[65][3] = 65;

  System.pos.rooms[66][0] = 62;
  System.pos.rooms[66][1] = 66;
  System.pos.rooms[66][2] = 66;
  System.pos.rooms[66][3] = 63;

  System.pos.rooms[67][0] = 67;
  System.pos.rooms[67][1] = 67;
  System.pos.rooms[67][2] = 63;
  System.pos.rooms[67][3] = 68;

  System.pos.rooms[68][0] = 68;
  System.pos.rooms[68][1] = 67;
  System.pos.rooms[68][2] = 61;
  System.pos.rooms[68][3] = 65;

  System.pos.rooms[69][0] = 68;
  System.pos.rooms[69][1] = 61;
  System.pos.rooms[69][2] = 69;
  System.pos.rooms[69][3] = 69;

  System.pos.rooms[70][0] = 70;
  System.pos.rooms[70][1] = 70;
  System.pos.rooms[70][2] = 70;
  System.pos.rooms[70][3] = 70;

  /*System.pos.rooms[0][0] = 0;
  System.pos.rooms[0][1] = 0;
  System.pos.rooms[0][2] = 0;
  System.pos.rooms[0][3] = 0;

  /*System.pos.rooms[0][0] = 0;
  System.pos.rooms[0][1] = 0;
  System.pos.rooms[0][2] = 0;
  System.pos.rooms[0][3] = 0;

  /*System.pos.rooms[0][0] = 0;
  System.pos.rooms[0][1] = 0;
  System.pos.rooms[0][2] = 0;
  System.pos.rooms[0][3] = 0;

  /*System.pos.rooms[0][0] = 0;
  System.pos.rooms[0][1] = 0;
  System.pos.rooms[0][2] = 0;
  System.pos.rooms[0][3] = 0;*/

  return 0;
}
