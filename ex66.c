//Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.
#include <stdio.h>

int main() {
    int num;
    int eh_primo = 1; 

    printf("Digite um numero para saber se é primo ou nao: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Numeros menores ou iguais a 1 nao sao primos.\n");
        return 0;
    }

    printf("Verificando o numero %d...\n", num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Nao eh primo. Eh divisivel por: %d\n", i);
            eh_primo = 0;
        }
    }

    if (eh_primo) {
        printf("Eh primo!\n");
    }

    return 0;
}
