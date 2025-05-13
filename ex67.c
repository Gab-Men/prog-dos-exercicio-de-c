#include <stdio.h>
#include <math.h>

int main() {
    int N, total_divisoes = 0;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Nao ha primos menores que 2.\n");
        return 0;
    }

    printf("Primos entre 1 e %d:\n", N);

    for (int i = 2; i <= N; i++) {  
        int eh_primo = 1;  
        for (int j = 2; j <= sqrt(i); j++) { 
            total_divisoes++;  
            if (i % j == 0) {
                eh_primo = 0;
                break;  
            }
        }
        if (eh_primo) {
            printf("%d ", i);
        }
    }

    printf("\nNumero total de divisoes realizadas: %d\n", total_divisoes);

    return 0;
}
