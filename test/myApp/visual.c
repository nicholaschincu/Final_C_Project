/* visual.c */
#include "visual.h"


int printSS(double row, double col){
  //double row, col;
  //getmaxyx(stdscr,row,col);
  //row = row / 2;
  //col = col / 2;
  //move(row,col);
  //refresh();
  //printw("s");
  //refresh();
move(row, col);
refresh();
  printw("sun");
  for(int i = 1; i < 8 + 1; i++){
    printPlanet(getcA(i-1), row, col, i);
    printf("%lf",getcA(i));
  }
  CURTIME = CURTIME + DT;
  sleep(1);
  clear();
  return SUCESS;
}

int printPlanet(double cA, double r, double c, int i){
  move(r + i * 5  * sin(cA * CURTIME), c + i * 15 * cos(cA * CURTIME));
  refresh();
  printw("O");
  refresh();
  return SUCESS;
}

int numYear(int year){
  init();
  CURTIME = 0;
  initscr();
  cbreak();
  keypad(stdscr, TRUE);
  double row, col;
  getmaxyx(stdscr,row,col);
  row = row / 2;
  col = col / 2;
 
  for(int i = 0; i < year; i++){
    printSS(row, col);
  }
  endwin();
  return SUCESS;
}
