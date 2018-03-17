#include <stdio.h>

void potrojenie(int ile, int tab[])
{
  for(int i=0; i<ile; i++)
  {
    tab[i] = i * 3;
  }
}

int main (void)
{
  int size = 15;
  int tab[size];

  for(int i=0; i<size; i++)
  {
    if(i<6)
    {
      tab[i] = i;
      printf("%d\n",tab[i]);
    }
  }

  printf("Po wywolaniu funkcji:\n");
  potrojenie(size, tab);

  for(int i=0; i<4; i++)
  {
    printf("%d\n",tab[i]);
  }

   return 0;
}


// IMPORTANT
//
// NAZWA TABLICY
//              jest rownoczesnie
//                                ADRESEM ZEROWEGO JEJ ELEMENTU !
