#include <stdio.h>

int main(){
    int soma = 0, idade, cont = 0;
    float media = 0;
    while (1){
        printf("Digite a idade da pessoa (0 para sair): ");
        scanf("%d", &idade);

        if (idade == 0){
            break;
        }
        
        soma += idade;
        cont++;
    }
    
    if (cont > 0){
        media = (float)soma / cont;
        printf("\nMedia das idades: %.2f\n", media);
    } else {
        printf("\nNao foram digitadas idades.\n");
    }
    
    if (media > 0 || media <=25.26){
        printf("\nA media das idades da sala eh de jovens\n");
    } else if (media > 25.26 || media <= 60.00){
        printf("A salasão adultos\n");
    } else {
        printf("\nA sala eh composta por idosos\n");
    }
    
    

}