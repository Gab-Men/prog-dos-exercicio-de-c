#include <stdio.h>

int main() {
    float bruto, salario;
    int contadores[9] = {0}; 
    while (1) {
        printf("Digite o valor de vendas brutas do vendedor (-1 para sair): ");
        scanf("%f", &bruto);

        if (bruto == -1) {
            break;
        }

        salario = 200 + (bruto * 0.09); 

        int indice = (int)(salario / 100) - 2; 

        if (indice >= 0 && indice < 8) {
            contadores[indice]++;
        } else if (indice >= 8) {
            contadores[8]++; 
        }
    }

    printf("\nDistribuição dos salários:\n");
    printf("$200 - $299: %d\n", contadores[0]);
    printf("$300 - $399: %d\n", contadores[1]);
    printf("$400 - $499: %d\n", contadores[2]);
    printf("$500 - $599: %d\n", contadores[3]);
    printf("$600 - $699: %d\n", contadores[4]);
    printf("$700 - $799: %d\n", contadores[5]);
    printf("$800 - $899: %d\n", contadores[6]);
    printf("$900 - $999: %d\n", contadores[7]);
    printf("$1000 ou mais: %d\n", contadores[8]);

    return 0;
}
