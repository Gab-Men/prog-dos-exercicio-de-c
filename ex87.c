#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float saltos[5], soma = 0, media;
    float maior, menor;

    while (1) {
        printf("Digite o nome do atleta (ou enter para sair): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        if (strlen(nome) == 0) break;

        for (int i = 0; i < 5; i++) {
            printf("Salto %d: ", i+1);
            scanf("%f", &saltos[i]);
        }
        getchar(); // Limpar o enter

        maior = menor = saltos[0];
        soma = 0;
        for (int i = 0; i < 5; i++) {
            if (saltos[i] > maior) maior = saltos[i];
            if (saltos[i] < menor) menor = saltos[i];
            soma += saltos[i];
        }

        media = (soma - maior - menor) / 3;

        printf("\nResultado final:\n");
        printf("Atleta: %s\n", nome);
        printf("Melhor salto: %.2f m\n", maior);
        printf("Pior salto: %.2f m\n", menor);
        printf("Media dos demais saltos: %.2f m\n", media);
    }

    return 0;
}
