#include <stdio.h>

int main() {
    int numero, cod_maior_altura = 0, cod_menor_altura = 0;;
    float alt;
    float maior_altura = -9999, menor_altura = 9999;

    for (int i = 1; i < 11; i++){
        printf("Digite seu numero: ");
        scanf("%d", &numero);
        

        printf("Digite sua altura: ");
        scanf("%f", &alt);

        
        if (alt > maior_altura) {
            maior_altura = alt;
            cod_maior_altura = numero;
        }

        if (alt < menor_altura) {
            menor_altura = alt;
            cod_menor_altura = numero;
        }
    }
    printf("\nO cliente mais alto tem o codigo %d e a altura de %.2f\n", cod_maior_altura, maior_altura);
    printf("O cliente mais baixo tem o codigo %d e a altura de %.2f\n", cod_menor_altura, menor_altura);
    return 0;
}
