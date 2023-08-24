// Escreva um programa para determinar qual é o nome de pessoa lexicograficamente menor  de todos os nomes fornecidos em um entrada interativa de dados. A entrada para quando se entra com um linha nula (sem nenhum nome digitado). Os  nomes podem ter no máximo 50 caracteres.

#include <iostream>
#include <string>

int main()
{
    std::string smallestName;
    std::string currentName;

    std::cout << "Digite os nomes (pressione Enter para cada nome, deixe vazio para encerrar):\n";

    // Lê os nomes até que uma linha vazia seja inserida
    while (true)
    {
        std::getline(std::cin, currentName);

        if (currentName.empty())
        {
            break; // Encerra o loop ao inserir um nome vazio
        }

        // Compara o nome atual com o menor nome até agora
        if (smallestName.empty() || currentName < smallestName)
        {
            smallestName = currentName;
        }
    }

    // Imprime o menor nome lexicograficamente
    if (!smallestName.empty())
    {
        std::cout << "O menor nome lexicograficamente é: " << smallestName << std::endl;
    }
    else
    {
        std::cout << "Nenhum nome foi inserido." << std::endl;
    }

    return 0;
}