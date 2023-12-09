// Scrivere un triangolo di asterischi di lato scelto dall'utente
// Input: lato del triangolo
// Output: triangolo di asterischi
#include <stdio.h>

int main() {
  int lato, i, j;

  printf("Inserisci il lato del triangolo: ");
  scanf("%d", &lato);

  for (i = 0; i < lato; i++) {
    for (j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}