
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

