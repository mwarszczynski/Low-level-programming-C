#include <stdio.h>
#include <stdlib.h>


main(int argc, char const *argv[]) {

int a[4];
char *p;
int z;

printf("%d\n", sizeof(a));
printf("%d\n", sizeof(p));
printf("%d\n", sizeof(z));

printf("\n%d\n", sizeof(unsigned int));
printf("%d\n", sizeof(char));
printf("%d\n", sizeof(double));
printf("%d\n", sizeof(float));

return 0;
}
