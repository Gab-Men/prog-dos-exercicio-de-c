#include <stdio.h>
#include <string.h>

int main() {
    char gabarito[10] = {'A','B','C','D','E','E','D','C','B','A'};
    char respostas[10];
    char repetir;
    int nota, totalAlunos = 0, somaNotas = 0, maior = 0, menor = 10;

    do {
        nota = 0;
        printf("Digite as respostas do aluno:\n");
        for (int i = 0; i < 10; i++) {
            printf("Questao %d: ", i+1);
            scanf(" %c", &respostas[i]);
            if (respostas[i] == gabarito[i]) {
                nota++;
            }
        }

        printf("Nota do aluno: %d\n", nota);
        totalAlunos++;
        somaNotas += nota;
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;

        printf("Outro aluno vai usar o sistema? (S/N): ");
        scanf(" %c", &repetir);

    } while (repetir == 'S' || repetir == 's');

    printf("\nTotal de alunos: %d\n", totalAlunos);
    printf("Maior nota: %d\n", maior);
    printf("Menor nota: %d\n", menor);
    printf("Media da turma: %.2f\n", somaNotas / (float)totalAlunos);

    return 0;
}
