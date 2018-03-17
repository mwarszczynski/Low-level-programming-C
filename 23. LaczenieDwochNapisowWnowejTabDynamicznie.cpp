#include <stdio.h>
#include <stdlib.h>

void stworz(char *tab1, char *tab2)
{
  char *ptr;
  ptr = (char*)malloc(sizeof(char));

  for(int i=0; tab1[i] != 0; i++)
  {
    ptr[i] = tab1[i];
    printf("%c", ptr[i]);
  }
  for(int i=0; tab2[i] != 0; i++)
  {
    ptr[i] = tab2[i];
    printf("%c", ptr[i]);
  }

}

int main(int argc, char const *argv[]) {

  char tab1[20] = "Michal";
  char tab2[30] = " Warszczynski";
  stworz(tab1,tab2);

  return 0;
}
