#include <stdio.h>
#include <stdlib.h>

int to(char* tab1, char j)
{
  char* tab;
  int rozmiar = 0;
  tab = (char*)malloc(sizeof(char));
  tab[0] = j;
  for (int i =0; tab1[i] != 0; i++)
  {
    tab[i +1] = tab1[i];
    rozmiar ++;
    printf("%c\n", tab[i]);
  }
  tab[rozmiar + 2] = tab1[rozmiar +1];
  printf("%s\n", tab);
}


int main() {

  char tab1[20] = {"ala ma kota"};
  char j = 'J';
  to(tab1, j);
  return 0;
}
