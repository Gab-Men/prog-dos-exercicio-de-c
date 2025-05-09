#include <stdio.h>

int main() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);

    if ((int)num == num)
        printf("Número inteiro\n");
    else
        printf("Número decimal\n");

    return 0;
}
