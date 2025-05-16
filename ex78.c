#include <stdio.h>

int main() {
    int cod, cont = 0;
    float alt, peso, soma_alt = 0, soma_peso = 0;
    float maior_altura = -9999, menor_altura = 9999;
    float maior_peso = -9999, menor_peso = 9999;
    int cod_maior_altura = 0, cod_menor_altura = 0;
    int cod_maior_peso = 0, cod_menor_peso = 0;

    printf("Aqui vai ter o codigo e digite 0 para parar\n");

    while (1) {
        printf("Digite seu codigo: ");
        scanf("%d", &cod);
        if (cod == 0) {
            break;
        }

        printf("Digite sua altura: ");
        scanf("%f", &alt);

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if (alt > maior_altura) {
            maior_altura = alt;
            cod_maior_altura = cod;
        }

        if (alt < menor_altura) {
            menor_altura = alt;
            cod_menor_altura = cod;
        }

        if (peso > maior_peso) {
            maior_peso = peso;
            cod_maior_peso = cod;
        }

        if (peso < menor_peso) {
            menor_peso = peso;
            cod_menor_peso = cod;
        }

        soma_alt += alt;
        soma_peso += peso;
        cont++;
    }

    if (cont > 0) {
        printf("\nO cliente mais alto tem o codigo %d e a altura de %.2f\n", cod_maior_altura, maior_altura);
        printf("O cliente mais baixo tem o codigo %d e a altura de %.2f\n", cod_menor_altura, menor_altura);
        printf("O cliente mais gordo tem o codigo %d e o peso de %.2f\n", cod_maior_peso, maior_peso);
        printf("O cliente mais magro tem o codigo %d e o peso de %.2f\n", cod_menor_peso, menor_peso);
        printf("A media das alturas dos clientes e %.2f\n", soma_alt / cont);
        printf("A media dos pesos dos clientes e %.2f\n", soma_peso / cont);
    } else {
        printf("\nNenhum cliente foi cadastrado.\n");
    }

    return 0;
}
