#include <stdio.h>

int main(){
    int come, tabu, ter, salva = 0;
    
    printf("Digite o numero que deseja saber a tabuada: \n");
    scanf("%d", &tabu);
    printf("Digite o numero que comecar a tabuada: \n");
    scanf("%d", &come);
    printf("Digite o numero que terminar a tabuada: \n");
    scanf("%d", &ter);
    salva = tabu;
    for (int i = come; i <= ter; i++){
        printf("%d x %d = %d\n", salva, i, tabu * i);
    }
    
}