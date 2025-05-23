#include <stdio.h>

int main() {
    float notas[4], soma = 0;
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i+1, notas[i]);
    }
    printf("Média: %.2f\n", soma/4);
    return 0;
}
