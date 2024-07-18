#include <iostream>

int main() {
    // Declaração das variáveis para armazenar os dois números
    int num1, num2, soma;

    // Solicita ao usuário que insira o primeiro número
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    // Solicita ao usuário que insira o segundo número
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Exibe o resultado da soma
    std::cout << "A soma de " << num1 << " e " << num2 << " é: " << soma << std::endl;

    return 0;
}

