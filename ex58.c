#include <stdio.h>

int main() {
    int a, b;
    double c = 1;

    printf("Aqui tem um programa que faz a potenciacao que voce desejar:\n\n");

    printf("Digite a base que deseja: \n");
    scanf("%d", &a);

    printf("Digite o expoente para fazer a potenciacao: \n");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        c *= a;
    }

    printf("A potencia deu: %.0lf\n", c);

    return 0;
}
