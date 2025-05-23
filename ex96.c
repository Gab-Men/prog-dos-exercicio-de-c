#include <stdio.h>

int main() {
    int numeros[20], par[20], impar[20];
    int p = 0, im = 0;
    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
            par[p++] = numeros[i];
        else
            impar[im++] = numeros[i];
    }

    printf("Todos: ");
    for (int i = 0; i < 20; i++) printf("%d ", numeros[i]);
    printf("\nPares: ");
    for (int i = 0; i < p; i++) printf("%d ", par[i]);
    printf("\nÍmpares: ");
    for (int i = 0; i < im; i++) printf("%d ", impar[i]);
    printf("\n");
    return 0;
}
