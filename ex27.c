#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    int temp;
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }
    printf("Ordem decrescente: %d %d %d\n", a, b, c);
    return 0;
}
