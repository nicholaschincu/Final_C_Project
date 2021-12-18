/* project.c */
#include "planet_data.h"

static struct Planet planet[8];

/* Global Variable definitions */
int init(){
  PI = 3.141592;
  PlanetNum = 8;
 
  DT = 30;
  planet[0].period = 87.969;
  planet[1].period = 224.701;
  planet[2].period = 365.256;
  planet[3].period = 686.980;
  planet[4].period = 4332.589;
  planet[5].period = 10759.22;
  planet[6].period = 30685.4;
  planet[7].period = 60189.0;

  for(int i = 0; i < PlanetNum ; i++){
    planet[i].cA = cA(i);
  }
   return SUCESS;
}

double getPeriod(int num){
  return planet[num].period;
}

double getcA(int num){
  return planet[num].cA;
}

//calculate and return dAngle / dt of each planets
double cA(int num){
  return((2 * PI) / getPeriod(num));
}




