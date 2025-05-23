#include <stdio.h>

float calcular_percentual(int votos_jogador, int total_votos) {
    return (votos_jogador * 100.0) / total_votos;
}

int main() {
    int votos[23] = {0};
    int numero, total_votos = 0;

    printf("Enquete: Quem foi o melhor jogador? (1 a 23, 0 para encerrar)\n");

    while (1) {
        printf("Numero do jogador (0=fim): ");
        scanf("%d", &numero);

        if (numero == 0) break;
        if (numero < 1 || numero > 23) {
            printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
            continue;
        }

        votos[numero - 1]++;
        total_votos++;
    }

    printf("\nResultado da votacao:\n");
    printf("Foram computados %d votos.\n\n", total_votos);
    printf("Jogador\tVotos\t%%\n");

    int maior_votos = 0, melhor_jogador = -1;

    for (int i = 0; i < 23; i++) {
        if (votos[i] > 0) {
            float percentual = calcular_percentual(votos[i], total_votos);
            printf("%d\t%d\t%.1f%%\n", i + 1, votos[i], percentual);
            if (votos[i] > maior_votos) {
                maior_votos = votos[i];
                melhor_jogador = i + 1;
            }
        }
    }

    if (melhor_jogador != -1) {
        float percentual = calcular_percentual(maior_votos, total_votos);
        printf("\nO melhor jogador foi o numero %d, com %d votos, correspondendo a %.1f%% do total de votos.\n",
            melhor_jogador, maior_votos, percentual);
    }

    return 0;
}
