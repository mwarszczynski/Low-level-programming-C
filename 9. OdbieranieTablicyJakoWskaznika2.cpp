#include <stdio.h>

// wymien el tablicy w sposob standardowy
void function_one(int tab[], int size)
{
  printf("Sposob standardowy przekazania tablicy\n");
  for(int i=0; i<size; i++)
  {
    printf("%d\n", tab[i]);
  }
}
// wymien el tablicy, przekaz tab jako wskaznik
void function_two(int *tab, int size)
{
  printf("Sposob wskaznikowy przekazania tablicy\n");
  for(int i=0; i<size; i++)
  {
    printf("%d\n", *(tab++));
  }
}


int main(int argc, char const *argv[]) {

  int tab[5] = {1,2,3,4,5};

  function_one(tab, 5);
  function_two(&tab[0], 5);

  return 0;
}
