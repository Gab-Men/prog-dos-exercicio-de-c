//Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
//Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
#include <iostream>

int main(){
    using namespace std;
    double popA = 80000;
    double popB = 200000;
    double crescimentoA = 0.03;
    double crescimentoB = 0.015;
    int anos = 0;
    while(popA <= popB){
        popA = popA + (popA * crescimentoA);
        popB = popB + (popB * crescimentoB);
        anos++;
    }
    cout << anos << endl;
    return 0;

}

