#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite outro numero: \n");
    scanf("%d", &n2);
    if(n1 == n2){
        printf("Os numeros sao iguais.\n");
    } else if (n1 > n2){
        printf("O primeiro numero e maior [%d]\n", n1);
    } else if (n1 < n2){
        printf("O segundo numero e maior [%d]\n", n2);
    } else {
        printf("Numeros invalido!");
        return 1;
    }
    return 0;
    
}