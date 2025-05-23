#include <stdio.h>

int main() {
    float temperaturas[12], soma = 0, media;
    const char *meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura média de %s: ", meses[i]);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 12;

    printf("\nMédia anual de temperatura: %.2f°C\n", media);
    printf("Meses com temperatura acima da média:\n");

    for (int i = 0; i < 12; i++) {
        if (temperaturas[i] > media) {
            printf("%d - %s: %.2f°C\n", i + 1, meses[i], temperaturas[i]);
        }
    }

    return 0;
}
