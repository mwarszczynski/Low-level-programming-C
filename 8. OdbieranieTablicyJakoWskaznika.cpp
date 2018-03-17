#include <stdio.h>

void funkcja_tabl(int tab[], int rozmiar)
{
  printf("\nWewnatrz funkcji funkcja_tabl \n");
  for(int i=0; i <rozmiar; i++)
  {
    printf("%d\t", tab[i]);
  }
}

void funkcja_wska(int *wsk, int rozmiar)
{
  printf("\nWewnatrz funkcji funkcja_wka \n");
  for(int i=0; i<rozmiar; i++)
  {
    printf("%d\t", *wsk++);
  }
}

void funkcja_wsk2(int *wsk, int rozmiar)
{
  printf("\nWewnatrz funkcji funkcja_wska2 \n");
  for(int i=0; i<rozmiar; i++)
  {
    printf("%d\t", wsk[i]);
  }
}

int main(int argc, char const *argv[]) {

  int tafla[4] = {5,10,15,20};
  funkcja_tabl(tafla,4);
  funkcja_wska(tafla,4);
  funkcja_wsk2(tafla,4);

  return 0;
}
