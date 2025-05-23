#include <stdio.h>

float calcular_percentual(int votos, int total) {
    return (votos * 100.0) / total;
}

int main() {
    int votos[6] = {0};
    const char *sistemas[] = {
        "Windows Server", "Unix", "Linux", "Netware", "Mac OS", "Outro"
    };
    int opcao, total_votos = 0;

    printf("Qual o melhor Sistema Operacional para uso em servidores?\n");
    printf("1- Windows Server\n2- Unix\n3- Linux\n4- Netware\n5- Mac OS\n6- Outro\n0- Encerrar\n");

    while (1) {
        printf("Digite sua opcao (0 para encerrar): ");
        scanf("%d", &opcao);

        if (opcao == 0) break;
        if (opcao < 1 || opcao > 6) {
            printf("Opcao invalida. Tente novamente.\n");
            continue;
        }

        votos[opcao - 1]++;
        total_votos++;
    }

    printf("\nSistema Operacional\tVotos\t%%\n");

    int mais_votado = 0;
    for (int i = 0; i < 6; i++) {
        float percentual = calcular_percentual(votos[i], total_votos);
        printf("%-20s\t%d\t%.2f%%\n", sistemas[i], votos[i], percentual);
        if (votos[i] > votos[mais_votado]) {
            mais_votado = i;
        }
    }

    printf("\nTotal de votos: %d\n", total_votos);
    printf("O Sistema Operacional mais votado foi o %s, com %d votos, correspondendo a %.2f%% dos votos.\n",
        sistemas[mais_votado], votos[mais_votado], calcular_percentual(votos[mais_votado], total_votos));

    return 0;
}
