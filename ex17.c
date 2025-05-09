#include <stdio.h>
#include <math.h>

void prisituacao(float litros);
void segsituacao(float litros);
void tersituacao(float litros);

int main() {
    float area, litros_necessarios;

    printf("Digite o tamanho da área a ser pintada (em metros quadrados): ");
    scanf("%f", &area);

    litros_necessarios = (area / 6.0) * 1.1;  // 10% de folga

    printf("\n==== Situação 1: Apenas latas de 18 litros ====\n");
    prisituacao(litros_necessarios);

    printf("\n==== Situação 2: Apenas galões de 3,6 litros ====\n");
    segsituacao(litros_necessarios);

    printf("\n==== Situação 3: Mistura para menor preço ====\n");
    tersituacao(litros_necessarios);

    return 0;
}

void prisituacao(float litros) {
    int latas = ceil(litros / 18.0);
    float preco = latas * 80.0;

    printf("Quantidade de latas de 18L: %d\n", latas);
    printf("Preço total: R$ %.2f\n", preco);
}

void segsituacao(float litros) {
    int galoes = ceil(litros / 3.6);
    float preco = galoes * 25.0;

    printf("Quantidade de galões de 3,6L: %d\n", galoes);
    printf("Preço total: R$ %.2f\n", preco);
}

void tersituacao(float litros) {
    int latas = (int)(litros / 18.0);
    float restante = litros - (latas * 18.0);
    int galoes = ceil(restante / 3.6);
    float preco = (latas * 80.0) + (galoes * 25.0);

    printf("Quantidade de latas de 18L: %d\n", latas);
    printf("Quantidade de galões de 3,6L: %d\n", galoes);
    printf("Preço total: R$ %.2f\n", preco);
}
