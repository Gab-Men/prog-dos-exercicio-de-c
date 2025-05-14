#include <stdio.h>

int main(){
    float valor = 1.99;
    int i = 0, cont = 1;
    
    while (1){
        i++;
        printf("O numero do produto é %d, ja o valor eh %.2f \n", i, valor);
        
        valor += 1.99;
        
        if (cont >= 50){
            break;
        }
        
        cont++;

        
    }
    

}