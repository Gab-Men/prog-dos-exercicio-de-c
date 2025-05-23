#include <stdio.h>

int main() {
    int idade[5];
    float altura[5];

    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d - Idade: ", i+1);
        scanf("%d", &idade[i]);
        printf("Pessoa %d - Altura: ", i+1);
        scanf("%f", &altura[i]);
    }

    printf("Ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d, Altura: %.2f\n", i+1, idade[i], altura[i]);
    }
    return 0;
}
