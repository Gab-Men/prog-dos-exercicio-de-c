#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros = 0, i = 0 , j = 0, z = 0, x = 0;
    bool booleano = false;

    while (booleano == false) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numeros);

        if (numeros < 0) {
            booleano = true;
        } else if (numeros >= 0 && numeros <= 25) {
            i++;
        } else if (numeros >= 26 && numeros <= 50) {
            j++;
        } else if (numeros >= 51 && numeros <= 75) {
            z++;
        } else if (numeros >= 76 && numeros <= 100) {
            x++;
        } else {
            printf("Número fora do intervalo [0-100], não será contabilizado.\n");
        }
    }

    printf("\n--- Resultado ---\n");
    printf("Entre 0 e 25      : %d\n", i);
    printf("Entre 26 e 50     : %d\n", j);
    printf("Entre 51 e 75     : %d\n", z);
    printf("Entre 76 e 100    : %d\n", x);

    return 0;
}
