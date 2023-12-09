//
//  es07-random.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int SR = 44100;

int main(int argc, char *argv[])
{
    srand((unsigned int) time(NULL));
    
    for (int i = 0; i < 10; i++) {
        int r = rand();
        printf("%d\n", r);
        
        double fr = r / (double) RAND_MAX;
        printf("%lf\n", fr);

        int d = r % 6;
        printf("%d\n", d);

    }
    
    
    
    
}

