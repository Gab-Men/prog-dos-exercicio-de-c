#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float notas[7], soma = 0, maior, menor, media;

    printf("Digite o nome do ginasta: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    for (int i = 0; i < 7; i++) {
        printf("Nota: ");
        scanf("%f", &notas[i]);
    }

    maior = menor = notas[0];
    soma = 0;

    for (int i = 0; i < 7; i++) {
        if (notas[i] > maior) maior = notas[i];
        if (notas[i] < menor) menor = notas[i];
        soma += notas[i];
    }

    media = (soma - maior - menor) / 5;

    printf("\nResultado final:\n");
    printf("Atleta: %s\n", nome);
    printf("Melhor nota: %.1f\n", maior);
    printf("Pior nota: %.1f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
