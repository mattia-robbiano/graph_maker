//
//  es08-funzioni.c
//  lez02
//
//  Created by Andrea Agostini on 20/11/23.
//

#include <stdio.h>

/*
 def doppio(x):
    return x*2
 */

// dichiarazione della funzione
double doppio(double x);

int randint(int min, int max);

// void: non c'è valore di ritorno
void scriviNumero(int n);

// void: non ci sono argomenti
double doubleRand(void);
// che restituisce un numero casuale tra 0. e 1.

// void: né valore di ritorno né argomenti
void saluta(void);


int main(int argc, char *argv[])
{
    double f;
    printf("che numero? ");
    scanf("%lf", &f);
    double d = doppio(f);
    // una chiamata a funzione non può avvenire prima della dichiarazione della funzione stessa
    printf("il suo doppio e` %lf\n", d);
}

// definizione della funzione: dichiara la funzione e ne definisce il comportamento
double doppio(double x)
{
    double r = x * 2;
    return r;
}

void scriviNumero(int n)
{
    printf("%d\n", n);
}

void saluta(void)
{
    printf("ciao\n");
}
