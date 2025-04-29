#include <stdio.h>

int main(){
    float fare, grau;
    printf("Fale quantos graus estao para transformar em farenheit");
    scanf("%f", &grau);
    fare = (grau * 9/5) + 32;
    printf("A temperatura em farenheit e %.2f", fare);
}