#include <stdio.h>
#include <string.h>
int main(){
    char str[100];

    printf("Digite um numero: ");
    fgets(str, sizeof(str), stdin);

    int tamanho = strlen(str);
    str[strcspn(str, "\n")] = '\0';
    for (int i = tamanho - 1; i >= 0; i--){
        printf("%c", str[i]);
    }

}