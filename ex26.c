#include <stdio.h>
int main() {
    float p1, p2, p3;
    printf("Digite os preços dos três produtos: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    if (p1 <= p2 && p1 <= p3)
        printf("Compre o primeiro produto.\n");
    else if (p2 <= p1 && p2 <= p3)
        printf("Compre o segundo produto.\n");
    else
        printf("Compre o terceiro produto.\n");
    return 0;
}