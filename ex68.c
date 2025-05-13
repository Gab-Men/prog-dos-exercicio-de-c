#include <stdio.h>

int main() {
    int nota, soma = 0, contador = 0;
    
    while (1) {
        printf("Digite uma nota (digite 1000 para sair): ");
        scanf("%d", &nota);

        if (nota == 1000) {
            break;
        }

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A média das notas é: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
