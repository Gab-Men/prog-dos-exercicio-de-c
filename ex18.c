#include <stdio.h>
int main(){
    float tama,tama_mbps,velo, tempo_min;
    printf("Fale o tamanho do arquivo em mega bytes: \n");
    scanf("%f", &tama);
    printf("Fale a velocidade do link em mega bytes: \n");
    scanf("%f", &velo);
    tama_mbps = tama * 8;
    tempo_min = tama_mbps / velo;
    tempo_min = tempo_min / 60;
    printf("O tempo de download sera de: [%.2f] minutos", tempo_min);
    return 0;
}

















//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).//