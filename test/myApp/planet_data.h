/* plannet_data.h */
#ifndef PLANET_DATA_H
#define PLANET_DATA_H
#define SUCESS 0
#include <stdio.h>

/* Global Variable Declarations */
double PI;
double PlanetNum;
double DT;

/* Data Structure Declarations */
struct Planet{
  double period;
  double cA;
};

/* Function Declarations */
int init();
double getPeriod(int num);
double getcA(int num);
double cA(int num);

#endif /* PLANNET_DATA_H */
