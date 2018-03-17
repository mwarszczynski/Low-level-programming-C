 // Napisz i przetestuj funkcję do wyznaczania wskaźnika na element o
//najmniejszej wartości w tablicy liczb typu double.

#include <stdio.h>
#include <stdlib.h>

void MinIndexTab(double tab[], unsigned rozmiar)
{
  int min_index = 0;

  for(int i=1; i<rozmiar; i++)
  {
    if( tab[i] < tab[min_index])
    {
        min_index = i;
        //printf("%d\n", min_index);
    }
    printf("%.f\n", min_index);
  }
}

main(int argc, char const *argv[]) {

int rozmiar;
double tablica[rozmiar] = {2.3, 3.3, 9.2, 5.1};
MinIndexTab(tablica, rozmiar);

return 0;
}
