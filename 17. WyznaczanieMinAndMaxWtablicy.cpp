//yznaczanie najmniejszej wartości w tablicy

#include <stdio.h>
#include <stdlib.h>

int wyznaczMin(int tab[],int rozmiar)
{
  int min = tab[0];

  for(int i=0; i<rozmiar;i++)
  {
    if(tab[i] < min)
    {
      min = tab[i];
      printf("Minimalna wartosc tablicy: %d\n",min);
    }
  }
}

int wyznaczMax(int tab[], int rozmiar)
{
  int max = tab[4];
  //printf("%d\n", tab[4]);

  for(int i=0; i<rozmiar; i++)
  {
    if(tab[i] >= max)
    {
      max = tab[i];
      printf("Max wart tablicy: %d\n", max);
    }
  }
}

main(int argc, char const *argv[]) {

int rozmiar = 5;
int tablica[rozmiar] = {102,32,113,334,5555};
wyznaczMin(tablica, rozmiar);
wyznaczMax(tablica,rozmiar);

  return 0;
}
