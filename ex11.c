#include <stdio.h>
#include <math.h>
int main(){
    int num1, num2;
    float num3, resul1, resul2, resul3;
    printf("Digite o primeiro numero \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero \n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero lembrando que pode ser numero com virgula\n ");
    scanf("%f", &num3);

    resul1 = (num1 * 2) * (num2 / 2.0);
    resul2 = (num1*3) + (num3);
    resul3 = num3*num3*num3;

    printf("O produto do dobro do primeiro com metade do segundo, resultaria em [%.2f]\n", resul1);
    printf("A soma do triplo do primeiro com o terceiro, resultaria em [%.2f]\n", resul2);
    printf("O terceiro elevado ao cubo, resultaria em [%.2f]\n", resul3);
}