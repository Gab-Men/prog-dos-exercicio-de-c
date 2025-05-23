#include <stdio.h>
#include <ctype.h>

int main() {
    char letras[10];
    int consoantes = 0;
    printf("Digite 10 letras:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letras[i]);
        letras[i] = tolower(letras[i]);
    }

    printf("Consoantes: ");
    for (int i = 0; i < 10; i++) {
        if (isalpha(letras[i]) && letras[i] != 'a' && letras[i] != 'e' && letras[i] != 'i' && letras[i] != 'o' && letras[i] != 'u') {
            printf("%c ", letras[i]);
            consoantes++;
        }
    }
    printf("\nTotal de consoantes: %d\n", consoantes);
    return 0;
}
