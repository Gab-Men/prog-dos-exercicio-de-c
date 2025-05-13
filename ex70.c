#include <stdio.h>

int main(){
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, voto, quantidade; 
    
    printf("Digite a qunatidade de eleitores: \n");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        printf("Fale os votos entre 1 e 3: \n");
        scanf("%d", &voto);

        if (voto == 1){
            candidato1++;
        } else if (voto == 2){
            candidato2++;
        } else{
            candidato3++;
        }
        
    }

    printf("O numero de votos do candidato 1 e %d \n", candidato1);
    printf("O numero de votos do candidato 2 e %d \n", candidato2);
    printf("O numero de votos do candidato 3 e %d \n", candidato3);
}