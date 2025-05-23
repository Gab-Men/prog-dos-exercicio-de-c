#include <stdio.h>

int main() {
    int A[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &A[i]);
        soma += A[i] * A[i];
    }
    printf("Soma dos quadrados: %d\n", soma);
    return 0;
}
