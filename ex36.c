#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto = 0;
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    if (mes < 1 || mes > 12 || dia < 1) {
        printf("Data inválida\n");
        return 0;
    }

    int dias_mes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && bissexto)
        dias_mes[2] = 29;

    if (dia > dias_mes[mes])
        printf("Data inválida\n");
    else
        printf("Data válida\n");

    return 0;
}
