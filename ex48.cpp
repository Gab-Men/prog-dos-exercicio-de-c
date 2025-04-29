#include <iostream>
#include <string>

int main() {
    std::string nome;
    int idade;
    double salario;
    char sexo, estadoCivil;

    // Validação do nome (deve ter mais de 3 caracteres)
    do {
        std::cout << "Digite o nome (mínimo 3 caracteres): ";
        std::getline(std::cin, nome);
        if (nome.length() <= 3) {
            std::cout << "Erro: O nome deve ter mais de 3 caracteres!\n";
        }
    } while (nome.length() <= 3);

    // Validação da idade (entre 0 e 150)
    do {
        std::cout << "Digite a idade (0 a 150): ";
        std::cin >> idade;
        if (idade < 0 || idade > 150) {
            std::cout << "Erro: Idade inválida! Deve estar entre 0 e 150.\n";
        }
    } while (idade < 0 || idade > 150);

    // Validação do salário (deve ser maior que zero)
    do {
        std::cout << "Digite o salário (maior que zero): ";
        std::cin >> salario;
        if (salario <= 0) {
            std::cout << "Erro: O salário deve ser maior que zero!\n";
        }
    } while (salario <= 0);

    // Validação do sexo ('f' ou 'm')
    do {
        std::cout << "Digite o sexo ('f' para feminino, 'm' para masculino): ";
        std::cin >> sexo;
        sexo = tolower(sexo); // Converte para minúsculo para evitar erros
        if (sexo != 'f' && sexo != 'm') {
            std::cout << "Erro: Sexo inválido! Digite 'f' ou 'm'.\n";
        }
    } while (sexo != 'f' && sexo != 'm');

    // Validação do estado civil ('s', 'c', 'v', 'd')
    do {
        std::cout << "Digite o estado civil ('s' - solteiro, 'c' - casado, 'v' - viúvo, 'd' - divorciado): ";
        std::cin >> estadoCivil;
        estadoCivil = tolower(estadoCivil); // Converte para minúsculo para evitar erros
        if (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd') {
            std::cout << "Erro: Estado civil inválido! Digite 's', 'c', 'v' ou 'd'.\n";
        }
    } while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 'd');

    // Exibir os dados validados
    std::cout << "\nCadastro concluído com sucesso!\n";
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << " anos\n";
    std::cout << "Salário: R$ " << salario << "\n";
    std::cout << "Sexo: " << (sexo == 'f' ? "Feminino" : "Masculino") << "\n";
    std::cout << "Estado Civil: ";
    
    switch (estadoCivil) {
        case 's': std::cout << "Solteiro(a)\n"; break;
        case 'c': std::cout << "Casado(a)\n"; break;
        case 'v': std::cout << "Viúvo(a)\n"; break;
        case 'd': std::cout << "Divorciado(a)\n"; break;
    }

    return 0;
}