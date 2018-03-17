//Napisz i przetestuj procedurę to wypełniania tablicy typu int,
//przekazanej odpowiednio przez parametry, wartościami kolejnych wyrazów ciągu Fibonacciego.

#include <stdio.h>
#include <stdlib.h>

void Fibonacci(int *tab)
{
  int *w1 = tab;
  int *w2 = tab+1;
  //printf("w1=%d\nw2=%d\n______\n",*w1, *w2);

  for(int i=0; tab[i] !=0; i++)
  {
    *w2 = *w2 + *w1;
    *w1 = *w2 - *w1;
    printf("Wartosc w2 to: %d\n",*w2);
  }
}

main(int argc, char const *argv[]) {

int tablica[5] = {1,2,3,4,5};
Fibonacci(tablica);

  return 0;
}
