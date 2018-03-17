#include <stdio.h>
#include <stdlib.h>


main(int argc, char const *argv[]) {

int a[] = {1,20,300,4000,5000,60000};
int *p = a + 3;

printf("%d\n", *++p);         // 50000
printf("%d\n", ++*p);         // 5001
printf("%d\n", *p++);         // 5001
printf("%d\n", *p);           // 60000
printf("%d\n", *p-3);         // 5997
printf("%d\n", *(p-=3));      // 300


return 0;
}
