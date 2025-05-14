#include <stdio.h>

int main(){
    int cds, valor, media = 0, quantidade = 1;

    printf("Digite a quantidade de CDs: \n");
    scanf("%d", &cds);

    for ( int i = 1; i <= cds; i++) {
        printf("Digite o valor de cada CD: \n");
        scanf("%d", &valor);
        media += valor;
        printf("A quantidade de cds é : %d e o preço posto em cada um é : %d\n", i, valor);
        quantidade++;
    }
    quantidade--;
    media = media / quantidade;

    printf("A media dos valores dos CDs e: %d\n", media);
}