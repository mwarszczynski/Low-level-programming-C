#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tablica[15];
  int *wsk_a, *wsk_b, *wsk_c;

  wsk_a = &tablica[5];
  wsk_b = &tablica[10];
  wsk_c = &tablica[11];

  printf("(wsk_b - wsk_a) = %d\n", wsk_b - wsk_a);          // 10 - 5
  printf("(wsk_c - wsk_b) = %d\n", wsk_c - wsk_b);         // 11 - 10
  printf("(wsk_a - wsk_c) = %d\n", wsk_a - wsk_c);         // 5 - 11
  printf("(wsk_c - wsk_a) = %d\n", wsk_c - wsk_a);         // 11 - 5

  return 0;
}
