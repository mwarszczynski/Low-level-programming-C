//Napisz i przetestuj procedurę to zerowania tablicy typu int,
//przekazanej odpowiednio przez parametry.
#include <stdio.h>
#include <stdlib.h>

void zerujTab(int *tab)
{
  for(int i=0; tab[i] != 0; i++)
  {
    tab[i] = 0;
    printf("%d\n", tab[i] );
  }
}

main(int argc, char const *argv[]) {

int tablica[3] = {1,2,3};

zerujTab(tablica);

  return 0;
}
