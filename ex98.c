#include <stdio.h>

int main() {
    int v[5], soma = 0, mult = 1;
    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
        mult *= v[i];
    }
    printf("Soma: %d\nMultiplicação: %d\nNúmeros: ", soma, mult);
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
