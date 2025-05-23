#include <stdio.h>

int main() {
    float notas[1000]; 
    int count = 0;
    float entrada;

    printf("Digite as notas (digite -1 para encerrar):\n");
    while (1) {
        printf("Nota %d: ", count + 1);
        scanf("%f", &entrada);

        if (entrada == -1) {
            break;
        }

        notas[count] = entrada;
        count++;
    }

    if (count == 0) {
        printf("Nenhuma nota foi informada.\n");
        return 0;
    }

    printf("\nQuantidade de notas lidas: %d\n", count);

    printf("Notas informadas: ");
    for (int i = 0; i < count; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    printf("Notas na ordem inversa:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%.2f\n", notas[i]);
    }

    float soma = 0;
    for (int i = 0; i < count; i++) {
        soma += notas[i];
    }
    printf("Soma das notas: %.2f\n", soma);

    float media = soma / count;
    printf("Média das notas: %.2f\n", media);

    int acimaMedia = 0;
    for (int i = 0; i < count; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }
    printf("Notas acima da média: %d\n", acimaMedia);

    int abaixoDeSete = 0;
    for (int i = 0; i < count; i++) {
        if (notas[i] < 7) {
            abaixoDeSete++;
        }
    }
    printf("Notas abaixo de 7: %d\n", abaixoDeSete);

    printf("\nPrograma encerrado. Obrigado!\n");

    return 0;
}
