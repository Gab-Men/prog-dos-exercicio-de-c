#include <stdio.h>

int main(){
    int a,b;
    printf("Digite o numero que deseja saber a tabuada: \n");
    scanf("%d", &a);

    for(int i = 0; i <= 10; i++){
        b = a*i;
        printf("Os numeros da tabuada e: %d \n", b);
    }
}