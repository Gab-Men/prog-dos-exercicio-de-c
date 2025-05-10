#include <stdio.h>
#include <math.h>

int main(){
    float a[5];
    float b, c;
    for(int i = 0; i < 5; i++){
        printf("Digite 1 numeros");
        scanf("%f", &a[i]);
    }

    for(int i = 0; i < 5; i++){
        b += a[i];
    }
    c = b/5;

    printf("A soma dos numeros digitado: %.2f", b);
    printf("A media dos numeros digitados: %.2f", c);
}