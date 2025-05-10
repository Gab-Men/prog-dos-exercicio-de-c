#include <stdio.h>

int main(){
    int a,b, c = 0;
    printf("Digite um numero \n");
    scanf("%d", &a);

    printf("Digite um numero onde estaja longe do outro para que seja digitado os numeros entre eles \n");
    scanf("%d", &b);
    
    for(int i = a + 1; i < b; i++){
        c += i;
    }
    

    printf("%d \n", c);
}


