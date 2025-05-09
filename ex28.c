#include <stdio.h>
int main() {
    char turno;
    printf("Em que turno você estuda? (M/V/N): ");
    scanf(" %c", &turno);
    if (turno == 'M' || turno == 'm')
        printf("Bom Dia!\n");
    else if (turno == 'V' || turno == 'v')
        printf("Boa Tarde!\n");
    else if (turno == 'N' || turno == 'n')
        printf("Boa Noite!\n");
    else
        printf("Valor Inválido!\n");
    return 0;
}
