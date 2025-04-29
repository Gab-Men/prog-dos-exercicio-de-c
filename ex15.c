#include <stdio.h>

int main(){
    float hr, sal, ir, inss, sin, liqui, resul1;
    printf("Digite quantas horas voce tranalhou esse mes:\n ");
    scanf("%f", &hr);
    printf("Digite quanto voce ganhou por hora:\n ");
    scanf("%f", &sal);
    resul1 = hr * sal;
    ir = (resul1 * 0.11);
    inss = (resul1 * 0.08);
    sin = (resul1 * 0.05);
    liqui = (resul1 - (ir + inss + sin));
    printf("O valor total que voce ganhou esse mes e: [R$ %.2f]\n", resul1);
    printf("O valor do imposto de renda e: [R$ %.2f]", ir);
    printf("\nO valor do inss e: [R$ %.2f]", inss);
    printf("\nO valor do sin e: [R$ %.2f]", sin);
    printf("\nO valor liquido que voce ganhou esse mes e: [R$ %.2f]", liqui);
}








