// Escreva um programa que leia duas strings e as coloque na tela. Imprima também a segunda letra da primeira string e a penúltima letra da segunda string.

#include <iostream>
#include <string>

int main()
{
    std::string primeiraString, segundaString;

    // Leitura das strings
    std::cout << "Digite a primeira string: ";
    std::cin >> primeiraString;

    std::cout << "Digite a segunda string: ";
    std::cin >> segundaString;

    // Verificação se as strings têm pelo menos duas letras
    if (primeiraString.length() < 2 || segundaString.length() < 2)
    {
        std::cout << "As strings devem ter pelo menos duas letras cada." << std::endl;
    }
    else
    {
        // Impressão da segunda letra da primeira string e penúltima letra da segunda string
        std::cout << "Segunda letra da primeira string: " << primeiraString[1] << std::endl;
        std::cout << "Penúltima letra da segunda string: " << segundaString[segundaString.length() - 2] << std::endl;
    }

    return 0;
}