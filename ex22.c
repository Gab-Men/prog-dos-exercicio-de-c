#include <stdio.h>
#include <ctype.h>

int main() {
    char letras_digitadas[3000];
    int a = 0, b = 0;

    printf("Digite um texto para calcular quantas vogais e quantas consoantes:\n");
    fgets(letras_digitadas, sizeof(letras_digitadas), stdin); // lê até ENTER

    for (int i = 0; letras_digitadas[i] != '\0'; i++) {
        char c = tolower(letras_digitadas[i]); // deixa minúsculo para facilitar

        if (isalpha(c)) { // verifica se é letra
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                a++; // vogal
            } else {
                b++; // consoante
            }
        }
    }

    printf("A quantidade de vogais é: %d\n", a);
    printf("A quantidade de consoantes é: %d\n", b);

    return 0;
}
