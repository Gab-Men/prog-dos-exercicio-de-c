#include <stdio.h>

int main() {
    int idade[30];
    float altura[30];
    float soma_altura = 0, media_altura;
    int contador = 0;

    for (int i = 0; i < 30; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite a altura (em metros, use ponto): ");
        scanf("%f", &altura[i]);

        soma_altura += altura[i];
    }

    media_altura = soma_altura / 30;

    for (int i = 0; i < 30; i++) {
        if (idade[i] > 13 && altura[i] < media_altura) {
            contador++;
        }
    }

    printf("\nMédia de altura: %.2f\n", media_altura);
    printf("Quantidade de alunos com mais de 13 anos e altura inferior à média: %d\n", contador);

    return 0;
}
