#include <stdio.h>

int main(){
    float mulher,homem, resul1,resul2;
    char h;
    printf("Digite se voce e homem ou mulher, sendo h = homem, m = mulher: \n");
    scanf("%c", &h);

    if (h == 'h' || h == 'H'){
        printf("Quanto de altura voce tem em cm: \n");
        scanf("%f", &homem);
        resul1 = (72.7 * homem) - 58;
        printf("Seu peso ideal e: %.2f \n", resul1);
        
    } else if(h == 'm' || h == 'M'){
        printf("Quanto de altura voce tem em cm: \n");
        scanf("%f", &mulher);
        resul2 = (62.1 * mulher) - 44.7;
        printf("Seu peso ideal e: %.2f \n", resul2);
    } else{
        printf("Opcao invalida \n");
        return 1;
    }
    
return 0;
}





