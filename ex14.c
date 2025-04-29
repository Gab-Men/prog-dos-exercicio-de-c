#include <stdio.h>

int main() {
    float peso, multa = 4, resul;
    printf("Digite o peso do peixe: \n");
    scanf("%f", &peso);
    if (peso > 50) {
        peso = peso - 50;
        resul = peso * multa;
        printf("O valor da multa e: %.2f\n", resul);
    } else {
        printf("voce nao pagara multa\n");
        return 1;
    }
    return 0;
}
