#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a, menor = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    printf("Maior: %d | Menor: %d\n", maior, menor);
    return 0;
}
