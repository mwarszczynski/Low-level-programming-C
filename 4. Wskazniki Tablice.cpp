#include <stdio.h>

int main (void)
{
  int *wi;
  double *wd;

  int tabint[10] = {1,2,3,4,5,6,7,8,9,10};
  double tabdbl[10];

  wd = &tabdbl[0];

  for (int i = 0; i < 10; i++) {
    *wd = i/10;
    wd++;
  }
  printf("Tresc tablic na poczatku\n");

  wi = tabint;
  wd = tabdbl;

  for(int k=0; k<10; k++)
  {
    printf("%d\t   %d\n", k, *wi);
    wi++;
    wd++;
  }
  // new declaration of pointers
  wi = &tabint[5];
  wd = tabdbl + 2;
  //push to table new values (in progress...)
  for(int m=0; m<4; m++)
  {
    *(wi++) = -222;
    *(wd++) = -777.5;
  }
  printf("Tresc tablicy po wstawieniu nowych wartosci:\n");
  wi = tabint;
  wd = tabdbl;

  for(int p =0; p<10; p++)
  {
    printf("tabint[%d] = %d\ttabdbl[%d]= %d\n", p, *(wi++),p, *(wd++));
  }


  return 0;
}


// IMPORTANT
//
// NAZWA TABLICY
//              jest rownoczesnie
//                                ADRESEM ZEROWEGO JEJ ELEMENTU !
