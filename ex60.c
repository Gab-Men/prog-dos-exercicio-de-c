#include <stdio.h>

int main(){
    int termo, primeiro = 1, segundo = 1, terceiro = 0;

    printf("Agora digite ate que termo voce quer que eu faço");
    scanf("%d", &termo);

    if(termo == 0){
        printf("Digite um numero maior que zero");
        scanf("%d", &termo);
        return 1;
    }
    printf("%d  %d  ", primeiro, segundo);
    for (int i = 2; i < termo; i++){
        terceiro = primeiro + segundo;
        printf("%d  ", terceiro);
        primeiro = segundo;
        segundo = terceiro;
    }
    
    return 0;
}




