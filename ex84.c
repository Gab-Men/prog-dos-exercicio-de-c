#include <stdio.h>

int main() {
    int codigo, qtd;
    float totalGeral = 0, valor = 0;

    while (1) {
        printf("Digite o código do item (ou 0 para encerrar): ");
        scanf("%d", &codigo);
        if (codigo == 0) break;

        printf("Digite a quantidade: ");
        scanf("%d", &qtd);

        switch (codigo) {
            case 100: valor = 1.20; break;
            case 101: valor = 1.30; break;
            case 102: valor = 1.50; break;
            case 103: valor = 1.20; break;
            case 104: valor = 1.30; break;
            case 105: valor = 1.00; break;
            default: printf("Código inválido!\n"); continue;
        }

        printf("Valor do item: R$ %.2f\n", valor * qtd);
        totalGeral += valor * qtd;
    }

    printf("Total a pagar: R$ %.2f\n", totalGeral);
    return 0;
}
