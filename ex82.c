#include <stdio.h>

int main() {
    int parcelas[5] = {1, 3, 6, 9, 12};
    float juros[5] = {0.0, 0.10, 0.15, 0.20, 0.25};
    float divida, valorComJuros, valorJuros, valorParcela;

    printf("Digite o valor da dívida: R$ ");
    scanf("%f", &divida);

    printf("\n%-18s %-17s %-24s %s\n", "Valor da Dívida", "Valor dos Juros", "Quantidade de Parcelas", "Valor da Parcela");

    for (int i = 0; i < 5; i++) {
        valorJuros = divida * juros[i];
        valorComJuros = divida + valorJuros;
        valorParcela = valorComJuros / parcelas[i];

        printf("R$ %-15.2f R$ %-14.2f %-24d R$ %.2f\n", valorComJuros, valorJuros, parcelas[i], valorParcela);
    }

    return 0;
}
