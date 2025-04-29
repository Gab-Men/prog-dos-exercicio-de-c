#include <stdio.h>
#include <math.h>
void soma(){
    int num, num2, num3, soma;
    printf("digite o numero que deseja somar:\n");
    scanf("%d", &num);
    printf("digite o numero que deseja somar:\n");
    scanf("%d", &num2);
    printf("digite o numero que deseja somar:\n");
    scanf("%d", &num3);
    soma = num + num2 + num3;
    printf("A soma dos numeros sao: %d \n",soma);
}

void mult(){
    int num4, num5;
    printf("digite o numero que deseja multiplicar:\n");
    scanf("%d ", &num4);
    printf("digite o numero que deseja multiplicar:\n");
    scanf("%d", &num5);
    int mult = num4 * num5;
    printf("A multiplicacao dos numeros sao: %d \n", mult);
}

int main(){
    int opcao;
    printf("Escolha estre as duas opcoes: \n 1 = soma, 2 = multiplicacao.\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        soma();
    } else if(opcao == 2){
        mult();
    } else{
        printf("Operacao invalida");
    }
    return 0;
}