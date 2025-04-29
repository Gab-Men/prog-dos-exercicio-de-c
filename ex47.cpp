
#include <iostream>
#include <string>
#include <iostream>
#include <string>

int main() {
    std::string user, pas;

    std::cout << "Digite o nome de usuário: ";
    std::getline(std::cin, user);  // Lê a linha inteira

    std::cout << "Digite a senha: ";
    std::getline(std::cin, pas);   // Lê a senha inteira

    std::cout << std::endl;

    // Verifica se a senha é igual ao nome de usuário
    while (user == pas) {
        std::cout << "Senha inválida, tente novamente." << std::endl;
        
        std::cout << "Digite o nome de usuário: ";
        std::getline(std::cin, user);

        std::cout << "Digite a senha: ";
        std::getline(std::cin, pas);

        std::cout << std::endl;
    }

    std::cout << "Seu nome de usuário é: " << user << std::endl;
    std::cout << "Sua senha foi cadastrada com sucesso!" << std::endl;

    return 0;
}