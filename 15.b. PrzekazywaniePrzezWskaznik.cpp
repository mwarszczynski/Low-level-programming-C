//Napisz i przetestuj procedurę do zamiany wartości parametrów typu double pod warunkiem, że wartość pierwszego z przekazanych parametrów jest większa niż wartość drugiego.

#include <stdio.h>
#include <stdlib.h>

void zamienJesli(double *w1, double *w2)
{
  double tmp;
  if(*w1 > *w2)
  {
    tmp = *w1;
    *w1 = *w2;
    *w2 = tmp;
    printf("w1=%f\nw2=%f",*w1,*w2);
  }
  else
  {
    printf("Nie spelnia");
  }
}

main(int argc, char const *argv[]) {

double x = 8.3;
double y = 9.2;

zamienJesli(&x,&y);

return 0;
}
