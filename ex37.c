#include <stdio.h>

int main() {
    int num;
    printf("Digite um número de 1 a 999: ");
    scanf("%d", &num);

    if (num < 1 || num >= 1000) {
        printf("Fora do intervalo\n");
        return 0;
    }

    int centenas = num / 100;
    int dezenas = (num % 100) / 10;
    int unidades = num % 10;

    if (centenas > 0) printf("%d centena%s", centenas, centenas > 1 ? "s" : "");
    if (dezenas > 0) {
        if (centenas > 0 && unidades > 0) printf(", ");
        else if (centenas > 0) printf(" e ");
        printf("%d dezena%s", dezenas, dezenas > 1 ? "s" : "");
    }
    if (unidades > 0) {
        if ((centenas > 0 || dezenas > 0)) printf(" e ");
        printf("%d unidade%s", unidades, unidades > 1 ? "s" : "");
    }

    printf("\n");
    return 0;
}
