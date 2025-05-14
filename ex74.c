#include <stdio.h>

int main() {
    float valor;
    int i;

    printf("Digite o valor do pao: ");
    scanf("%f", &valor);

    printf("Panificadora Pao de Ontem - Tabela de precos\n");

    for(i = 1; i <= 50; i++) {
        printf("%2d - R$ %.2f\n", i, valor * i);
    }

    return 0;
}
