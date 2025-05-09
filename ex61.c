#include <stdio.h>

int main() {
    int a;
    unsigned long long fatorial = 1;

    // Solicita o número ao usuário
    printf("Digite um número inteiro positivo para calcular o fatorial: ");
    scanf("%d", &a);

    // Verifica se o número é negativo
    if (a < 0) {
        printf("Fatorial não existe para número negativo.\n");
        return 1; // Encerra o programa com erro
    }

    // Calcula o fatorial
    for (int i = a; i >= 1; i--) {
        fatorial *= i;
    }

    printf("O numero deu %d! = %llu\n", a, fatorial);

    return 0;
}
