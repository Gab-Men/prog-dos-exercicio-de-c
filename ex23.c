int main() {
    float nota1, nota2, media;
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    if (media == 10)
        printf("Aprovado com Distinção\n");
    else if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
    return 0;
}