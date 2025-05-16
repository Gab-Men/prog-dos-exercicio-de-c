#include <stdio.h>

int main() {
    char tecla;
    int maior = -9999;
    int menor = 9999;
    int temp, soma = 0, cont = 0;

    while (1) {
        printf("Deseja informar uma temperatura? (s/n): ");
        scanf(" %c", &tecla);  

        if (tecla == 'n' || tecla == 'N') {
            printf("Saindo do loop.\n");
            break;
        } else {
            printf("Digite a temperatura: ");
            scanf("%d", &temp);
            getchar();  

            if (temp > maior) {
                maior = temp;
            }
            if (temp < menor) {
                menor = temp;
            }
            soma += temp;
            cont++;
        }
    }

    if (cont > 0) {
        printf("\nA media das temperaturas informadas foi %.2f\n", (float)soma / cont);
        printf("A maior temperatura foi %d\n", maior);
        printf("A menor temperatura foi %d\n", menor);
    } else {
        printf("\nNenhuma temperatura informada.\n");
    }

    return 0;
}
