#include <stdio.h>
int main(){
    double nt1,nt2,nt3,nt4,media;
    printf("Digite a sua nota do primeiro bimestre:\n");
    scanf("%lf", &nt1);
    printf("Digite a sua nota do segundo bimestre:\n");
    scanf("%lf", &nt2);
    printf("Digite a sua nota do terceiro bimestre:\n");
    scanf("%lf", &nt3);
    printf("Digite a sua nota do quarto bimestre:\n");
    scanf("%lf", &nt4);
    
    media = (nt1 + nt2 + nt3 + nt4)/4;
    printf("A media dos bimestres foram: [%.1lf]", media);
    return 0;
}