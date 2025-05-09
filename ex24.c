#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("Maior: %d\n", maior);
    return 0;
}