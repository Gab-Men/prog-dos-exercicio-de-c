#include <stdio.h>
#include <math.h>

int main(){ 
    float resul, alt;
    printf("Digite sua altura para saber seu peso ideal: \n");
    scanf("%f", &alt);
    resul = (72.7 * alt) - 58;
    printf("Seu peso ideal e: %.2f\n", resul);
}









