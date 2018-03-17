#include <stdio.h>
#include <stdlib.h>

// void iteruj(int a,int b)
// {
//   for(int i=a; i<=b; i++)
//   {
//     printf("%d\n", i);
//   }
// }

void iteruj2(int a, int b)
{
  int *ptr;
  ptr = (int*)malloc(sizeof(int));

  for(int i=a; i<=b; i++)
  {
    ptr[i] = i;
    printf("%d\n", ptr[i]);
  }
}

int main(int argc, char const *argv[]) {

  int x =2, y =5;
  // iteruj(x, y);
  iteruj2(x,y);

  return 0;
}
