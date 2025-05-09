#include <stdio.h>

int main() {
    int valor, n100, n50, n10, n5, n1;

    printf("Digite o valor do saque (10 a 600): ");
    scanf("%d", &valor);

    if (valor < 10 || valor > 600) {
        printf("Valor inválido\n");
        return 0;
    }

    n100 = valor / 100;
    valor %= 100;
    n50 = valor / 50;
    valor %= 50;
    n10 = valor / 10;
    valor %= 10;
    n5 = valor / 5;
    n1 = valor % 5;

    if (n100) printf("%d nota(s) de 100\n", n100);
    if (n50)  printf("%d nota(s) de 50\n", n50);
    if (n10)  printf("%d nota(s) de 10\n", n10);
    if (n5)   printf("%d nota(s) de 5\n", n5);
    if (n1)   printf("%d nota(s) de 1\n", n1);

    return 0;
}
