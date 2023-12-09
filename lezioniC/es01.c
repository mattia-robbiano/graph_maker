//
//  main.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

#include <stdio.h>

#ifndef scanf_s
#define scanf_s scanf
#endif

int main(int argc, const char * argv[]) {
    
    int a;
    // a = int(input("dimmi un numero: "));
    printf("dimmi un numero: ");
    scanf_s("%d", &a); // attenzione alla & !!!
    printf("mi hai dato %d\n", a);
    // && -> and
    // || -> or
    // ! -> not
    // ^ -> xor
    
    // == != > < >= <=
    if (a < 0) {
        printf("piccolo\n");
    } else {
        if (a > 100) {
            printf("grande\n");
        } else {
            printf("compreso\n");
        }
    }
    
    if (a < 0) {
        printf("piccolo\n");
    } else if (a > 100) {
        printf("grande\n");
    } else {
        printf("compreso\n");
    }
    
    
    int b;
    
    if (a > 0) {
        b = a;
    } else {
        b = 0;
    }
    
    // oppure l'operatore (condizionale) ternario:
    
    b = a > 0 ? a : 0;
    
    b = a > 0 ? a :
        a < -10 ? -a : 0;

    
    
    
}

