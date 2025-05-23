#include <stdio.h>

int main() {
    int n;
    float h = 0.0;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    printf("Valor de H: %.2f\n", h);
    return 0;
}
