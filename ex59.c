#include <stdio.h>

int main(){
    int numero[10];
    int par = 0, impar = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &numero[i]);
    }

    for(int i = 0; i <10; i++){
        if(numero[i] % 2){
            par++;
        } else{
            impar++;
        }
    }

    printf("Numero de pares e: %d e o numero de impares e: %d", par, impar);
}