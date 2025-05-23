#include <stdio.h>

#define MAX 1000  

int main() {
    float salarios[MAX], abonos[MAX];
    int total_funcionarios = 0;
    float total_gasto = 0, maior_abono = 0;
    int qtd_minimo = 0;
    float salario;

    printf("Projecao de Gastos com Abono\n");

    while (1) {
        printf("Salario: ");
        scanf("%f", &salario);

        if (salario == 0)
            break;

        if (total_funcionarios >= MAX) {
            printf("Limite maximo de funcionarios atingido.\n");
            break;
        }

        salarios[total_funcionarios] = salario;

        float abono = salario * 0.2;
        if (abono < 100) {
            abono = 100;
            qtd_minimo++;
        }

        abonos[total_funcionarios] = abono;
        total_gasto += abono;

        if (abono > maior_abono)
            maior_abono = abono;

        total_funcionarios++;
    }

    printf("\nSalario - Abono\n");
    for (int i = 0; i < total_funcionarios; i++) {
        printf("R$ %.2f - R$ %.2f\n", salarios[i], abonos[i]);
    }

    printf("\nForam processados %d colaboradores\n", total_funcionarios);
    printf("Total gasto com abonos: R$ %.2f\n", total_gasto);
    printf("Valor minimo foi pago a %d colaboradores\n", qtd_minimo);
    printf("Maior valor de abono pago: R$ %.2f\n", maior_abono);

    return 0;
}
