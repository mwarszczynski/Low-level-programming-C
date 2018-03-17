#include <stdio.h>

int main (void)
{
  int *ptr;
  int tab[3] = {1,2,3};

  ptr = tab;

  printf("%d\n", ptr);
  printf("%d\n", ++ptr );
  printf("%d\n", ptr += 1);

  return 0;
}


// IMPORTANT
//
// NAZWA TABLICY
//              jest rownoczesnie
//                                ADRESEM ZEROWEGO JEJ ELEMENTU !
