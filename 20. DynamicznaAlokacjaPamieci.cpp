#include <stdio.h>
#include <stdlib.h>

void dolacz(char *tab, char litera)
{
  char *tab2;
  tab2 = (char*)malloc(sizeof(char));

  for(int i=0; tab[i] !=0; i++)
  {
    tab2[i+1] = tab[i];
  }
  tab2[0] = litera;
  printf("%s\n", tab2);
}

int main(int argc, char const *argv[]) {

  char m = 'M';
  char tab[] = "Adam";
  dolacz(tab, m);

  return 0;
}
