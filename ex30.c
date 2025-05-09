#include <stdio.h>

int main() {
    float valor_hora, horas_trabalhadas, salario_bruto, ir, inss, fgts, total_descontos, salario_liquido;
    printf("Digite o valor da sua hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    salario_bruto = valor_hora * horas_trabalhadas;
    inss = salario_bruto * 0.10;
    fgts = salario_bruto * 0.11;

    if (salario_bruto <= 900) {
        ir = 0;
    } else if (salario_bruto <= 1500) {
        ir = salario_bruto * 0.05;
    } else if (salario_bruto <= 2500) {
        ir = salario_bruto * 0.10;
    } else {
        ir = salario_bruto * 0.20;
    }

    total_descontos = ir + inss;
    salario_liquido = salario_bruto - total_descontos;

    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("(-) IR: R$ %.2f\n", ir);
    printf("(-) INSS: R$ %.2f\n", inss);
    printf("FGTS: R$ %.2f\n", fgts);
    printf("Total de Descontos: R$ %.2f\n", total_descontos);
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);

    return 0;
}
