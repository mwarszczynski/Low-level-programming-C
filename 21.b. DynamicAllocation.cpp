// Napisz i przetestuj procedurę do dołączania drugiego z napisów
// przekazanych przez parametry do napisu pierwszego.

#include <stdio.h>
#include <stdlib.h>

void doklej(char* s1, char* s2){
   int i, j;
   for (i = 0; s1[i] != 0; i++);
   for (j = 0; s1[j] != 0; j++,i++)
      s1[i] = s2[j];
   //s1[i] = 0;
}

void doklej2(char *s1, char* s2)
{
  for (; *s1 != 0; s1++);
  for (; *s2 != 0; s1++,s2++)
   *s1 = *s2;
   *s1 = 0;
}

main(){
   char n1[100] = "Alicja";
   char n2[20] = " w krainie";
   //doklej(n1, n2);
   doklej2(n1,n2);
   printf("%s\n", n1);
}
