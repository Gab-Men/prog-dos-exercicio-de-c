#include <stdio.h>

int main() {
    int anos = 2025, ano = 1995;
    double porc = 0.015, salario = 1000;;

    //printf("Digite o salario: ");
    //scanf("%d", &salario);

    for (int i = ano + 1; i <= anos; i++){
        salario = salario + (salario * porc);
        printf("O salario em %d e de R$ %.2lf\n", i, salario);
        porc *= 2;
    }
}