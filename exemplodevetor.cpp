#include <iostream>
#include <vector>


int main(){
    using namespace std;
    int tamanho;
    cout << "Digite o tamanho do vetor:";
    cin >> tamanho;
    vector<int> vetor(tamanho);
    vector<int> nota(tamanho);

    for(int i = 0; i < tamanho; i++){
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> nota[i];
    }
    cout << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Notas digitadas: " << nota[i] << " "; 
        cout << endl;
    }
    int x = sizeof(nota) / sizeof(int);
    cout << "Tamanho dos valores do vetor: " << x << endl;
    int y = sizeof(nota);
    cout << "Tamanho do vetor em bytes: " << y << endl;  
    
    return 0;

}