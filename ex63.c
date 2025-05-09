//Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.

#include <stdio.h>

int main() {
    int n, num;
    int menor, maior;
    int soma = 0;

    printf("Quantos números deseja digitar? ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }
    

    // Lê o primeiro número para inicializar menor e maior
    printf("Digite o número 1: ");
    scanf("%d", &num);

    if (num < 0 || num > 1000){
        printf("Digite um numero que seja entre 0 e 1000");
        scanf("%d", &num);
    }
    menor = maior = num;
    soma = num;

    // Lê os outros n-1 números
    for (int i = 2; i <= n; i++) {
        printf("Digite o número %d: ", i);
        scanf("%d", &num);
        if (num < 0 || num > 1000){
            printf("Digite um numero que seja entre 0 e 1000");
            scanf("%d", &num);
        }
        soma += num;
        
        if (num < menor) {
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
    }

    // Exibe os resultados
    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma dos valores: %d\n", soma);

    return 0;
}
