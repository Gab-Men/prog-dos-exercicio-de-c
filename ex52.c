#include <stdio.h>
#include <math.h>

int main() {
    int bytes;
    float a[5];
    float maior = -INFINITY;

    
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%f", &a[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        if (a[i] > maior) {
            maior = a[i];
        }
    }

    
    bytes = sizeof(a) / sizeof(a[0]);

    
    printf("\nMaior número: %.2f\n", maior);
    printf("O array tem %d elementos.\n", bytes);

    return 0;
}
