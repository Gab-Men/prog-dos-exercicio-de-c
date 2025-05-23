#include <stdio.h>

int main() {
    int vet[10], vet2[10], vet3[20];

    for (int i = 0; i < 10; i++) {
        printf("Digite um número para o vetor 1: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("Digite um número para o vetor 2: ");
        scanf("%d", &vet2[i]);
    }

    for (int i = 0, j = 0; i < 10; i++) {
        vet3[j++] = vet[i];   
        vet3[j++] = vet2[i];  
    }

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    return 0;
}
