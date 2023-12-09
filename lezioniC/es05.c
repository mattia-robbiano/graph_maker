//
//  es05.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

#include <stdio.h>

int main(int argc, char* argv[])
{
    double a, b;
    
    printf("dividendo: ");
    scanf("%lf", &a);
    
    do {
        printf("divisore: ");
        scanf("%lf", &b);
    } while (b == 0);
    
    double c = a / b;
    printf("risultato: %lf\n", c);
}
