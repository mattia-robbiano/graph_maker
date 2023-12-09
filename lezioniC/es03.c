//
//  es03.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

// for
// while
// do...while

#include <stdio.h>

int main(int argc, char *argv[]) {
    
    /*
     for i in range(10):
        print(i)
     */
    
    int i;
    
    // i++ -> i += 1 -> i = i + 1
    // i--
    // ++i --i
    
    
    //    1.      2.     4.
    for (i = 0; i < 10; i++) {
        printf(" %d\n", i); // 3.
    }
    
    // 1 -> i = 0: inizializzazione del ciclo
    // 2 -> i < 10? : verifica della condizione
    // 3 -> vera: printf(blabla): esecuzione del corpo del ciclo
    // 4 ->      i++: incremento
    // --- torna a 2
    
  

    
    double f;
    for (f = 1, i = 1;
         f < 100 && i <= 1000;
         f *= 2, i++) {
        printf("%d %lf\n", i, f);
    }
    
    for (i = 0; i < 100; i++) {
        printf("%d\n", i); // 3.
    }
    
    for (int n = 10; n > 0; n--) {
        printf("%d\n", n);
    }

    printf("\n");
    
    

}
