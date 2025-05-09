#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os 3 lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Triângulo Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    } else {
        printf("Os lados não formam um triângulo\n");
    }

    return 0;
}
