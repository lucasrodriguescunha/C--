// Escreva um programa que faça a leitura de valores inteiros positivos para uma variável
// composta contendo até 10 elementos. O usuário deve informar quantos elementos serão
// inseridos no programa. Calcule e escreva:

// ● Os 2 maiores elementos
// ● A soma dos elementos pares em posições ímpares

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    const int MAX_ELEMENTS = 10;
    int numElements;

    cout << "Digite o número de elementos (até " << MAX_ELEMENTS << "): ";
    cin >> numElements;

    if (numElements < 1 || numElements > MAX_ELEMENTS)
    {
        cout << "Número de elementos inválido." << endl;
        return 1;
    }

    int elementos[MAX_ELEMENTS];
    cout << "Digite os " << numElements << " elementos:" << endl;

    for (int i = 0; i < numElements; ++i)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> elementos[i];
    }

    // Encontrando os 2 maiores elementos
    int maior1 = INT_MIN, maior2 = INT_MIN;

    for (int i = 0; i < numElements; ++i)
    {
        if (elementos[i] > maior1)
        {
            maior2 = maior1;
            maior1 = elementos[i];
        }
        else if (elementos[i] > maior2)
        {
            maior2 = elementos[i];
        }
    }

    cout << "Os 2 maiores elementos são: " << maior1 << " e " << maior2 << endl;

    // Calculando a soma dos elementos pares em posições ímpares
    int somaParesPosImpares = 0;

    for (int i = 1; i < numElements; i += 2)
    {
        if (elementos[i] % 2 == 0)
        {
            somaParesPosImpares += elementos[i];
        }
    }

    cout << "A soma dos elementos pares em posições ímpares é: " << somaParesPosImpares << endl;

    return 0;
}