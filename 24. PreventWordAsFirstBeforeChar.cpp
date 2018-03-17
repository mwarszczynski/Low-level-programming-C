// Prosze utowrzyć funkcje która przyjmuja parametry tab1 i znak(j) utowrzy nową
// tablice której zawartośc to zawartośc tab1 z pierwsym znakiem jakie znak(j)
// reszte elemntow tab1 przesówa sie o jeden indeks w prawo
#include <stdio.h>
#include <stdlib.h>

void doloz(char *tab1, char j)
{
  char *ptr;
  ptr = (char*)malloc(sizeof(char));
  ptr[0] = j;
  printf("%s", ptr);
  ptr++;
  for(int i=0; tab1[i] !=0; i++)
  {
    ptr[i] = tab1[i];
    printf("%c", ptr[i]);
  }
}

int main() {
  char tab1[20] = {"arry Potter"};
  char j = 'H';
  doloz(tab1, j);

  return 0;
}
