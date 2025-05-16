#include <stdio.h>

int main() {
    int cod[5] = {1, 2, 3, 4, 5};
    int numvei[5] = {3000, 2500, 1500, 1800, 1200};
    int numaci[5] = {157, 160, 200, 60, 100};

    int maior_indice = -1, menor_indice = 999999;
    int cod_maior_indice = 0, cod_menor_indice = 0;

    int soma_veiculos = 0, soma_acidentes_menor2000 = 0;
    int cont_menor2000 = 0;

    for (int i = 0; i < 5; i++) {
        if (numaci[i] > maior_indice) {
            maior_indice = numaci[i];
            cod_maior_indice = cod[i];
        }

        if (numaci[i] < menor_indice) {
            menor_indice = numaci[i];
            cod_menor_indice = cod[i];
        }

        soma_veiculos += numvei[i];

        if (numvei[i] < 2000) {
            soma_acidentes_menor2000 += numaci[i];
            cont_menor2000++;
        }
    }

    float media_veiculos = soma_veiculos / 5.0;
    float media_acidentes_menor2000 = (cont_menor2000 > 0) ? (soma_acidentes_menor2000 / (float)cont_menor2000) : 0;

    printf("Maior indice de acidentes: %d (Cidade %d)\n", maior_indice, cod_maior_indice);
    printf("Menor indice de acidentes: %d (Cidade %d)\n", menor_indice, cod_menor_indice);
    printf("Media de veiculos nas 5 cidades: %.2f\n", media_veiculos);
    printf("Media de acidentes nas cidades com menos de 2000 veiculos: %.2f\n", media_acidentes_menor2000);

    return 0;
}
