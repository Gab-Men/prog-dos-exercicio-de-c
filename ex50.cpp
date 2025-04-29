//Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
#include <iostream>

int main(){
    using namespace std;
    double popA, popB, crescimentoA, crescimentoB;
    int anos = 0;
    cout << "População A: ";
    cin >> popA;
    cout << "População B: ";
    cin >> popB;
    cout << "Taxa de crescimento da população A (%): ";
    cin >> crescimentoA;
    cout << "Taxa de crescimento da população B (%): ";
    cin >> crescimentoB;
    while (popA <= 0 || popB <= 0 || crescimentoA < 0 || crescimentoB < 0) {
    cout << "População A: ";
    cin >> popA;
    cout << "População B: ";
    cin >> popB;
    cout << "Taxa de crescimento da população A (%): ";
    cin >> crescimentoA;
    cout << "Taxa de crescimento da população B (%): ";
    cin >> crescimentoB;
    }
    
    while(popA <= popB){
        popA = popA + (popA * crescimentoA);
        popB = popB + (popB * crescimentoB);
        anos++;
    }
    cout << anos << endl;
    return 0;

}

