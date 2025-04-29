#include <stdio.h>
#include <math.h> // Biblioteca correta

int main(){
    float circ, area;
    printf("Fale qual e o raio do circulo:\n");
    scanf("%f", &circ);

    area = M_PI* pow(circ,2);
    printf("A area eh: [%.2f]", area);
    return 0;
}