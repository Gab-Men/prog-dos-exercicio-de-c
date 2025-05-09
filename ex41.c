#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char op;
    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2);
    printf("Escolha a operação (+ - * /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': resultado = n1 + n2; break;
        case '-': resultado = n1 - n2; break;
        case '*': resultado = n1 * n2; break;
        case '/': 
            if (n2 == 0) {
                printf("Divisão por zero!\n");
                return 0;
            }
            resultado = n1 / n2; 
            break;
        default:
            printf("Operação inválida!\n");
            return 0;
    }

    printf("Resultado: %.2f\n", resultado);

    if ((int)resultado == resultado)
        printf("É inteiro e ");
    else
        printf("É decimal e ");

    if (resultado >= 0)
        printf("positivo\n");
    else
        printf("negativo\n");

    if ((int)resultado % 2 == 0)
        printf("É par\n");
    else
        printf("É ímpar\n");

    return 0;
}
