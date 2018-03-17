#include <stdio.h>

void pokazWartosci(const int *wsk, int ile)
{
  printf("Fukcja pokazujaca wartosci wyswietla: \n");
  for(int i=0; i<ile; i++;wsk++)
  {
    *wsk += 22;
    printf("Element numer [%d] ma wartosc: %d\n",i, *wsk);
  }
}

void zmienWartosc(int *wsk, int ile)
{
  printf("Funkcja zmieniajaca wartosc:\n");
  for(int i=0; i<ile; i++, wsk++;)
  {
    *wsk =+ 500;
    printf("%d\n", wsk[i]);
  }
}

int main(int argc, char const *argv[]) {

  int tablica[5] = {100,200,300,400,500};

  pokazWartosci(tablica, 5);
  zmienWartosc(tablica,5);

  return 0;
}
