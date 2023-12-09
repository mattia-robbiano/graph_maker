//
//  es02-pasta.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    int pasta;

    printf("1 -> amatriciana\n");
    printf("2 -> cacio e pepe\n");
    printf("3 -> carbonara\n");    
    printf("quale scegli? ");

    scanf("%d", &pasta);
    
    switch(pasta) {
        case 1: printf("guanciale e pomodoro\n"); break;
        case 2: printf("cacio e pepe, ovviamente\n"); break;
        case 3: printf("guanciale e uovo\n"); break;
        default: printf("non ho il risotto\n"); break;
    }
}
