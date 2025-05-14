#include <stdio.h>

int main() {
    float valor = 0, conta[100]; 
    int cont = 0;

    while (1) {
        printf("Produto %d, digite um valor (ou 0 para finalizar): ", cont + 1);
        scanf("%f", &valor);

        if (valor == 0) {
            break;
        }

        if (cont >= 100) {
            printf("Limite de produtos atingido.\n");
            break;
        }

        conta[cont] = valor;
        cont++;
    }

    printf("\nResumo dos produtos:\n");
    for (int i = 0; i < cont; i++) {
        printf("O valor do produto %d e: %.2f\n", i + 1, conta[i]);
    }

    return 0;
}
