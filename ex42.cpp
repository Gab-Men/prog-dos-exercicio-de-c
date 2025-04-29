#include <iostream>
#include <string>


using namespace std;
int main(){
    string perg[5] = {"Qual é o seu nome?", "Qual é a sua idade?", "Qual é o seu endereço?", "Qual é o seu telefone?", "Qual é o seu e-mail?"};

    int resp_positivo = 0;
    char resp;
    for (int i = 0; i < 5; i++) {
        cout << perg[i] << " ";
        cin >> resp;
        if (resp == 's' || resp == 'S') {
            resp_positivo++;
        }

    }
    
    cout << "/nClassificação: ";
    if (resp_positivo == 5){
        cout << "Assassino";
    } else if (resp_positivo >= 3 ){
        cout << "Cúmplice";
    } else if (resp_positivo == 2){
        cout << "Suspeito";
    } else
    {
        cout << "Inocente";
    }
    return 0;

}

