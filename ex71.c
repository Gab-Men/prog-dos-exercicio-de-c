#include <stdio.h>

int main(){
    int t, totalAlunos = 0, alunos, i;

    printf("Digite o numero de turmas que voce deseja calcular a media: ");
    scanf("%d", &t);
    
    for(i = 1; i <= t; i++){
        do {
            printf("Digite a quantidade de alunos que tem na turma (Limite de 40) turma %d: ", i);
            scanf("%d", &alunos);
            if(alunos > 40 || alunos <= 0){
                printf("Quantidade invalida! Digite um valor entre 1 e 40.\n");
            }
        } while(alunos > 40 || alunos <= 0);

        totalAlunos += alunos;
    }

    printf("A media de alunos por turma e: %.2f\n", (float)totalAlunos / t);

    return 0;
}
