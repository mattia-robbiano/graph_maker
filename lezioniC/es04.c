//
//  es04.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//


#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < 100; ) {
        printf("i vale %d\n", i);
        int inc;
        printf("quale incremento? ");
        scanf("%d", &inc);
        if (inc >= 0 && inc <= 10) {
            i += inc;
        } else {
            printf("incremento non valido\n");
        }
    }
    // la variabile inc che ho definito all'interno del corpo del for
    // qui non esiste più perché sono fuori dal suo blocco di codice
    
    
    // while (condizione) { }
    // do { } while (condizione);
    
    // for (;;) { } // ciclo infinito
    // while (1) { } // ciclo infinito
    
}


