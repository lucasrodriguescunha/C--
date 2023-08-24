// Desenvolver um programa que efetue a leitura de 10 elementos inteiros para um vetor V1.
// Para construir o vetor V2 de mesmo tipo, observa-se a seguinte regra de formação: se o valor
// do índice for par, o valor do elemento deverá ser multiplicado por 5; se for ímpar, deverá ser
// somado 5. Ao final, mostrar o conteúdo dos dois vetores.

#include <iostream>

int main() {
    const int size = 10;
    int V1[size];
    int V2[size];

    // Leitura dos elementos para o vetor V1
    std::cout << "Digite 10 elementos inteiros para o vetor V1:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> V1[i];
    }

    // Construção do vetor V2 conforme a regra
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            V2[i] = V1[i] * 5;
        } else {
            V2[i] = V1[i] + 5;
        }
    }

    // Mostrando os conteúdos dos vetores
    std::cout << "Conteúdo do vetor V1:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << V1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Conteúdo do vetor V2:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << V2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}