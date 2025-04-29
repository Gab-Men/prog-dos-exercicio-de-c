#include <stdio.h>


int main(){
    int area, lado;
    printf("Digite quantos cm eh o lado do deu quadrado:\n");
    scanf("%d", &lado);
    area = lado * lado;
    area = area *2;
    printf("O dobro da area do seu quadrado eh: [%d]", area);
    return 0;
}