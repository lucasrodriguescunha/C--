// Exercício 6:

// Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.

// Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7.

#include <iostream>
#include <iomanip> // Para definir a precisão decimal na saída

using namespace std;

float calcularPesoIdeal(float altura, char sexo)
{
    float peso;

    if (sexo == 'm')
    {
        peso = 72.7 * altura - 58;
    }
    else if (sexo == 'f')
    {
        peso = 62.1 * altura - 44.7;
    }
    else
    {
        cout << "Sexo inválido. Use 'm' para masculino ou 'f' para feminino." << endl;
        exit(1);
    }

    return peso;
}

int main()
{
    float altura;
    char sexo;

    cout << "Digite a altura: ";
    cin >> altura;

    cout << "Digite o sexo (m/f): ";
    cin >> sexo;

    float peso = calcularPesoIdeal(altura, sexo);
    cout << "O peso ideal eh: " << fixed << setprecision(2) << peso << endl;

    return 0;
}