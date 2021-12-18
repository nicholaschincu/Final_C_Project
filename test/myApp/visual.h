/* vis.h */
#ifndef VISUAL_H
#define VISUAL_H
#define SUCESS 0
#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "planet_data.h"

int CURTIME;
int printSS(double row, double col);
int numYear(int year);
int printPlanet(double cA, double r, double c, int i);



#endif /* VISUAL_H */
