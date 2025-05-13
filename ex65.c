//Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.

#include <stdio.h>
#include <stdbool.h>
int main(){
    int num;
    printf("Digite um numero para saber se é primo ou nao");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("Seu numero não é primo %d", num);
    } else{
        printf("Seu numero é primo %d", num);
    }
}