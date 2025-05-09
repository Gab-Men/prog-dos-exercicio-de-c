#include <stdio.h>

int main(){
    int a;
    printf("DIgite um numero positivo ou negativo");
    scanf("%d", &a);
    if (a >= 0){
        printf("O numero é posivo: %d", a);
    } else{
        printf("O numero é negativo: %d", a);
    }
}