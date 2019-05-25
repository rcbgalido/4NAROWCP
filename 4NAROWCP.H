#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

#define lowerbound 380

//DEFAULTS.C
void programInitialize();
void showHeaderFooter();

//PLYRMOVE.C
void playerMove();

//CPMOVE.C
void computerMove();
void computerRandomMove();

//CHECKWIN.C
void checkWin();
void checkVertical();
void checkHorizontal();
void checkForwardDiagonal();
void checkBackwardDiagonal();

//SUPPORTS.C
void incrementColumn(int a);
int getColumn(int a);
int getIncrement(int a);
int getCircleXCoordinate(int a);

//4NAROWCP.C
extern char wholeGrid[45];
extern int playerColor, computerColor;
extern int arrowCounter, winCounter;
extern int oneColumn, twoColumn, threeColumn, fourColumn;
extern int fiveColumn, sixColumn, sevenColumn;
extern int GraphDriver, GraphMode;

 
