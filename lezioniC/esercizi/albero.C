// Scrivere un triangolo isocele di asterischi di altezza h
// (h dispari) e base 2h-1
// Input: h
// Output: triangolo isocele di asterischi di altezza h e base 2h-1

#include <stdio.h>

int main(){
    int h, i, j, k;
    printf("Inserisci l'altezza dell'albero (dispari): ");
    scanf("%d", &h);
    for(i=0; i<h; i++){
        for(j=0; j<h-i-1; j++){
            printf(" ");
        }
        for(k=0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<h-1;i++){
        printf(" ");
    }
    printf("*\n");
    for(i=0;i<h-1;i++){
        printf(" ");
    }
    printf("*\n");

    return 0;
}