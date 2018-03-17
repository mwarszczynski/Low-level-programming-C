//Napisz i przetestuj procedurę do zamiany wartości dwóch elementów
// w tablicy liczb typu double.
#include <stdio.h>
#include <stdlib.h>

void zamien(double *w1, double *w2)
{
  double tmp;

  tmp = *w1;
  *w1 = *w2;
  *w2 = tmp;
}

main(int argc, char const *argv[]) {

double x = 2.3;
double y = 4.3;

printf("Przed wywolaniem funkcji\nx = %f\ny= %f", x,y);
zamien(&x,&y);
printf("\n\nPo wywolaniu funkcji\nx = %f\ny= %f", x,y);


return 0;
}
