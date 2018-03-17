#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

char *stacja[] = {"Warszawa","Bruksela","Poznan","Praga","Madryt"};
char *www[3];
int i;

for(i=0; i<7; i++)
{
  printf("Stacja %s\n", stacja[i]);
}

ww[0] = stacja[2];
ww[1] = stacja[5];
ww[2] = "Taki tekst";

printf("Oto 3 elemnty tablicy: \n%s,%s,%s", www[0],www[1],www[2Q]);

  return 0;
}


// jesli do funkcji wysyamy tablice znakowa,
    // to mozna w tej funkcji odebrac te tablice jako
      // rzeczywiscie tablice
        // 'char tab[]'
          // lub jako wskaznik do obiektow typu char
            // char *wsk
