#include <stdio.h>

int main() {
    int n;
    float s = 0.0;
    printf("Digite o número de termos: ");
    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j += 2) {
        s += (float)i / j;
    }

    printf("Soma da série: %.2f\n", s);
    return 0;
}
