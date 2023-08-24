// Escreva um programa que leia uma string, conte quantos caracteres desta string são iguais a  "a" e substitua os que forem iguais a "a" por "b". O programa deve imprimir o número de caracteres modificados e a string modificada.

#include <iostream>
#include <string>

int main()
{
    std::string inputString;
    std::cout << "Digite uma string: ";
    std::cin >> inputString;

    int count = 0; // Para contar o número de caracteres "a" encontrados

    for (char &c : inputString)
    {
        if (c == 'a')
        {
            c = 'b'; // Substitui "a" por "b"
            count++;
        }
    }

    std::cout << "Número de caracteres modificados: " << count << std::endl;
    std::cout << "String modificada: " << inputString << std::endl;

    return 0;
}