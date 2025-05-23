#include <stdio.h>

int main() {
    float notas[10][4], medias[10];
    int count = 0;
    for (int i = 0; i < 10; i++) {
        float soma = 0;
        printf("Aluno %d:\n", i+1);
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[i] = soma / 4;
        if (medias[i] >= 7.0) count++;
    }

    printf("Número de alunos com média >= 7.0: %d\n", count);
    return 0;
}
