#include <stdio.h>


int main(){
    float fire, grau;
    printf("Fale quantos Farenheit estao:\n");
    scanf("%f", &fire);
    grau = (5 * (fire-32) / 9);
    printf("Esta [%.2f] graus", grau);
    return 0;
}