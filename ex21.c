#include <stdio.h>
#include <ctype.h>

int main() {
    char r[255];
    printf("Que genero vc é? Digite f ou m: ");
    scanf(" %c", &r[0]);  // espaço antes de %c para ignorar enter anterior

    if(r[0] == 'f' || r[0] == 'F') {
        printf("Você é mulher");
    } else if(r[0] == 'm' || r[0] == 'M') {
        printf("Você é homem");
    } else {
        printf("Você é um animal");
    }

    return 0;
}
