/*/#include <iostream>
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
    int x = sizeof(vetor) / sizeof(int);
    cout << "Tamanho dos valores do vetor: " << x << endl;
    int y = sizeof(vetor);
    cout << "Tamanho do vetor em bytes: " << y << endl;  
    
    return 0;

}/*/

#include <stdio.h>
#include <iostream>

int main(){
    int tamanho;
    printf("Digite o tamanho do meu pau:\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for ( int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < tamanho; i++){
        printf("O seu numeros da minha bola eh %d \n", vetor[i]);
    }
    int x = sizeof(tamanho);
    int y = sizeof(vetor)/ sizeof(int);
    printf("O tamanho do vetor eh %d\n", x);
    printf("O tamanho do vetor eh %d\n", y);
    return 0;
}