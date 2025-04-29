#include <stdio.h>
int main(){
    double me, ne, ce;
    printf("Digite quantos metros são:\n");
    scanf("%lf", &me);
    ne = 100;
    ce = me * ne;
    printf("Sua conversao deu: [%.2lf]", ce);

}