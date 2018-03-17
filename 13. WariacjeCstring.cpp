#include <stdio.h>
#include <stdlib.h>

void rozdzielacz_tab(char tab[])
{
  for(int i =0; tab[i] != 0; i++)
  {
    printf("%c-", tab[i]);
  }
}

rozdzielacz_wsk(char *w)
{
  printf("Hehe");
}

int main(int argc, char const *argv[]) {

  char ostrzezenie[80] = {"omomom"};

  printf("\nWersja tablicowa:\n");
  rozdzielacz_tab(ostrzezenie);


  printf("\nWersja wskznikowa:\n");
  rozdzielacz_wsk(ostrzezenie);


  return 0;
}
