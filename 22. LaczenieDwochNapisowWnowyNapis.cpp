// Zadanie Napisz i przetestuj procedurę do tworzenia napisu,
// który jest połączeniem dwóch napisów przekazanych przez parametry.
#include <stdio.h>
#include <stdlib.h>

void polacz(char *n1, char *n2)
{
  int i,j;
  for(i=0; n1[i] != 0; i++);
  for(j=0; n1[j] !=0; j++,i++)
    n1[i] = n2[j];
    //printf("%c\n", n1[i]);
}


main(){
   char n1[25] = "Rododendron";
   char n2[] = " to kwiat";

   // dolacz n2 do n1
   polacz(n1, n2);
   printf("%s\n", n1);

   return 0;
}
