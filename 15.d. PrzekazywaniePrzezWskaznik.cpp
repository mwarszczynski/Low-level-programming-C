//Napisz i przetestuj procedurę to wypełniania tablicy typu int,
//przekazanej odpowiednio przez parametry, wartością pierwszego elementu tej tablicy.
#include <stdio.h>
#include <stdlib.h>

void PodmienPierwszyElement(int *tab)
{
  for(int i=0; tab[i] != 0; i++)
  {
    tab[i] = tab[0];
    printf("%d\n", tab[i]);
  }
}

main(int argc, char const *argv[]) {

int tablica[3] = {12,2,3};

PodmienPierwszyElement(tablica);

  return 0;
}
