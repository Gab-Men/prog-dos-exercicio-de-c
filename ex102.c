#include <stdio.h>

int main() {
    int vet[10], vet2[10], vet3[10], vet4[30];

    for (int i = 0; i < 10; i++) {
        printf("Digite um número para o vetor 1: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("Digite um número para o vetor 2: ");
        scanf("%d", &vet2[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite um número para o vetor 3: ");
        scanf("%d", &vet3[i]);
    }

    for (int i = 0, j = 0; i < 10; i++) {
        vet4[j++] = vet[i];   
        vet4[j++] = vet2[i];
        vet4[j++] = vet3[i];
    }

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", vet4[i]);
    }
    printf("\n");

    return 0;
}
