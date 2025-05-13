#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char texto[500];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    
    size_t len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
        len--;
    }

    printf("Valores ASCII decimais:\n");
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("'%c' = %d\n", texto[i], (int)texto[i]);
    }
}