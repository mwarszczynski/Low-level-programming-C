#include <stdio.h>


int main (void)
{

  printf("\nWydruk tresci tablicy:\n");

  int tab[4] = {22,33,44,55};

  printf("Adresy tablicy\n");
  printf("Adres drugiej komorki tablicy: %d\n", tab+2);
  printf("Adres drugiej komorki tablicy: %d\n\n", &tab[2]);

  printf("Wartosc drugiej komorki tablicy: %d, spod adresu %p\n", *(tab+2));
  printf("Wartosc drugiej komorki tablicy: %d, spod adresu %p\n", tab[2]);

   return 0;
}


// IMPORTANT
//
// NAZWA TABLICY
//              jest rownoczesnie
//                                ADRESEM ZEROWEGO JEJ ELEMENTU !
