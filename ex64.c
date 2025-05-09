#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    char opcao;
    unsigned long long fatorial;
    bool continuar = true;

    while (continuar) {
        printf("Digite 'P' para parar de calcular ou qualquer outra letra para continuar: ");
        scanf(" %c", &opcao);  
        if (opcao == 'P' || opcao == 'p') {
            continuar = false;
            break;
        }

        printf("Digite um número inteiro positivo menor que 16 para calcular o fatorial: ");
        scanf("%d", &a);

        if (a < 0 || a > 15) {
            printf("O número deve ser positivo e menor que 16!\n\n");
            continue;
        }

        fatorial = 1;
        for (int i = a; i >= 1; i--) {
            fatorial *= i;
        }

        printf("%d! = %llu\n\n", a, fatorial);
    }

    printf("Código encerrado com sucesso.\n");
    return 0;
}
