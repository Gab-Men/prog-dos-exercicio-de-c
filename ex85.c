#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0, total = 0;

    while (1) {
        printf("Digite o voto (0 para sair): ");
        scanf("%d", &voto);

        if (voto == 0) break;

        switch (voto) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default: printf("Voto inválido!\n"); continue;
        }
        total++;
    }

    printf("\nResultados:\n");
    printf("1 - Jose: %d votos\n", c1);
    printf("2 - João: %d votos\n", c2);
    printf("3 - Maria: %d votos\n", c3);
    printf("4 - Ana: %d votos\n", c4);
    printf("Nulos: %d votos\n", nulo);
    printf("Brancos: %d votos\n", branco);
    printf("Percentual nulos: %.2f%%\n", (nulo * 100.0) / total);
    printf("Percentual brancos: %.2f%%\n", (branco * 100.0) / total);

    return 0;
}
