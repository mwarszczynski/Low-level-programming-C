#include <stdio.h>

void hydraulik(int *wsk_do_kranu)
{
  *wsk_do_kranu = 100;
}

int main(int argc, char const *argv[]) {

  int kran = -1;
  int kurek = -10;
  int bateria[15];

  printf("Stan techniczny kranu = %d\n",kran);
  hydraulik(&kran);
  printf("Po wezwaniu hydraulika stan techniczny kranu = %d\n", kran);

  hydraulik(&bateria[4]);
  printf("Po wezwaniu hydraulika stan techniczny baterii = %d\n", bateria);

  for(int i =4; i<=8; ++)
  {
    hydraulik(&bateria[i]);
    //printf("%d\n", *bateria[i]);
  }

  return 0;
}
