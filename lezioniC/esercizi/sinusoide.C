#include <stdio.h>
#include <math.h>

int main() {
    int Amplitude, Frequency, Phase;
    double t, sineValue;

    printf("Enter amplitude: ");
    scanf("%d", &Amplitude);
    printf("Enter frequency: ");
    scanf("%d", &Frequency);
    printf("Enter phase (in radians): ");
    scanf("%d", &Phase);

    // Calculate the number of samples per period (10 samples)
    int samplesPerPeriod = 10;
    double period = 2 * M_PI / Frequency;
    double deltaT = period / samplesPerPeriod;

    for (t = 0; t <= period; t += deltaT) {
        sineValue = Amplitude * sin(t * Frequency + Phase);
        printf("%f",sineValue);
        printf("\n");
/*
        // Scala il valore della sinusoide per adattarlo al range dell'asse verticale
        int scaledValue = (int)((sineValue / Amplitude) * 20);

        // Stampa l'asse del tempo (verticale) e il grafico dell'onda sinusoidale
        for (int i = 20; i >= -20; i--) {
            if (i == scaledValue) {
                printf("*");
            } else if (i == 0) {
                printf("|"); // Asse verticale
            } else {
                printf(" ");
            }
            printf("\n");
        }*/

    }

    return 0;
}
