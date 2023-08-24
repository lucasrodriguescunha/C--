// Exercício 1: Faça uma função que recebe a idade de uma pessoa em dias e retorna essa idade expressa em anos, meses e dias. 

#include <iostream> // cout, cin, endl

using namespace std; // std::cout, std::cin, std::endl

int main() // ponto de entrada do programa
{
    int idade, anos, meses, dias; // declaração de variáveis

    cout << "Digite a idade em dias: "; // cout: imprime na tela
    cin >> idade; // cin: lê do teclado

    // 8030
    anos = idade / 365; // 22 anos
    meses = (idade % 365) / 30; // 2 meses
    dias = (idade % 365) % 30;

    cout << "A idade em anos, meses e dias eh: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl; // endl: quebra de linha

    return 0;
}