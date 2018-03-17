//Zmiana wartosci zmiennych
#include <stdio.h>
#include <stdlib.h>

void zmienBezSkutku(double w1, double w2)
{
  double tmp;
  printf("\n\nNa poczatku wartosci przyjete przez funkcje wynosza: w1 =%f, w2=%f",w1,w2);
  tmp = w1;
  w1 = w2;
  w2 = tmp;
  printf("\n\nPo dzialaniu funkcji wartosci wynosza:\nw1=%f, w2=%f", w1,w2);
}

main(int argc, char const *argv[]) {

double x = 2.3;
double y = 4.3;

printf("Przed wywolaniem funkcji\nx = %f\ny= %f", x,y);
zmienBezSkutku(x,y);
printf("\n\nPo wywolaniu funkcji\nx = %f\ny= %f", x,y);


return 0;
}
