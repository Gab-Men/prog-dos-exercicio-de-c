#include <stdio.h>

int main() {
    float salario, percentual, aumento, novo_salario;
    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    if (salario <= 280) {
        percentual = 0.20;
    } else if (salario <= 700) {
        percentual = 0.15;
    } else if (salario <= 1500) {
        percentual = 0.10;
    } else {
        percentual = 0.05;
    }

    aumento = salario * percentual;
    novo_salario = salario + aumento;

    printf("Salário antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento aplicado: %.0f%%\n", percentual * 100);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novo_salario);
    return 0;
}
