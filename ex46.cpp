#include <cstdio>
#include <iostream>

int main(){
    bool ver = true;
    while(ver == true){
        float nota;
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10){
            printf("Nota válida [%.2f]\n", nota);
            break;
        } else {
            printf("Nota inválida\n");
            ver = true;
        }

    }
    
    return 0;
}