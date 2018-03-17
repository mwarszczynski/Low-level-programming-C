#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tablica[5];
  int *wsk_czer, *wsk_ziel;
  int i;

  wsk_czer = &tablica[3];
  printf("Mamy piecioelementowa tablice\n"
         "Wskaznik czerwony pokazuje na element o indeksie 3\n"
         "Na ktory element ma pokazywac wskaznik zielony? (0-4):");

  scanf("%d",i);
  //printf("%d\n",i);

  if (i<0 || i>4) {
    printf("Nie ma takiego el tablicy!\n");
  }
  else
  {
    wsk_ziel = &tab[i];
    printf("\nZ przeprowadzonego porownania wskaznikw\n"
           "czerwonego z zielonym wynika, ze: \n");
  }

  return 0;
}

// in progress
