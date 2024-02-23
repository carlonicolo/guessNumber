#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSegreto, tentativo, tentativi = 0;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Genera un numero casuale tra 1 e 100
    numeroSegreto = rand() % 100 + 1;

    printf("Ho scelto un numero tra 1 e 100. Prova a indovinarlo!\n");

    do {
        printf("Inserisci il tuo tentativo: ");
        scanf("%d", &tentativo);
        tentativi++;

        if (tentativo > numeroSegreto) {
            printf("Troppo alto! Prova ancora.\n");
        } else if (tentativo < numeroSegreto) {
            printf("Troppo basso! Prova ancora.\n");
        } else {
            printf("Complimenti! Hai indovinato il numero in %d tentativi!\n", tentativi);
        }
    } while (tentativo != numeroSegreto);

    return 0;
}
