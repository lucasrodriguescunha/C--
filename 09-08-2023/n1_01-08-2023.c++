// Faça um programa que efetue a leitura de 5 elementos para um vetor. No final, apresentar a soma de todos os elementos que sejam ímpares.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int cont_acima_media = 0;
    float media, n1, n2, n3, n4, n5;

    cout << "Entre com a nota dos cinco alunos:\n ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Cálculo da média
    media = (n1 + n2 + n3 + n4 + n5) / 5;

    // Contagem das notas acima da média
    if (n1 > media)
        cont_acima_media++;
    if (n2 > media)
        cont_acima_media++;
    if (n3 > media)
        cont_acima_media++;
    if (n4 > media)
        cont_acima_media++;
    if (n5 > media)
        cont_acima_media++;

    // Apresentação dos resultados
    cout << "A media das notas eh: " << media << endl;
    cout << "Quantidade de notas acima da media: " << cont_acima_media << endl;

    return 0;
}
