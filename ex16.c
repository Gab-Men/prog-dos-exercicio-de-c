#include <stdio.h>
#include <math.h> 

int main() {
    float area, litros_necessarios, latas_necessarias, preco_total;
    const float COBERTURA_POR_LITRO = 3.0;
    const float LITROS_POR_LATA = 18.0;    
    const float PRECO_POR_LATA = 80.0;    

    
    printf("Digite o tamanho da área a ser pintada (em metros quadrados): ");
    scanf("%f", &area);

    
    litros_necessarios = area / COBERTURA_POR_LITRO;

    latas_necessarias = ceil(litros_necessarios / LITROS_POR_LATA);

    preco_total = latas_necessarias * PRECO_POR_LATA;

    printf("\nQuantidade de latas de tinta necessárias: %.0f\n", latas_necessarias);
    printf("Preço total: R$ %.2f\n", preco_total);

    return 0;
}