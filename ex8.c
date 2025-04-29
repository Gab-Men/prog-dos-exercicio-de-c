#include <stdio.h>


int main(){
    float dolar, tempo, resul, trasf;
    printf("Quantos dolares voce ganha por hora trabalhada:\n");
    scanf("%f", &dolar);
    printf("Quanto tempo em horas voce trabalhou esse mes:\n");
    scanf("%f", &tempo);
    trasf = 5.78;
    resul = (trasf*dolar)*tempo;
    printf("O seu salario em reais deu: [%.2f]", resul);
    return 0;
}