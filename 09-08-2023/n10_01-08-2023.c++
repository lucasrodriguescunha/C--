// Uma empresa concederá um aumento de salário aos seus funcionários, variável conforme o cargo, conforme a tabela abaixo. Faça um programa que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o cargo não estiver na tabela, o funcionário deverá então receber 5% de aumento. Mostre o salário antigo, o novo salário e a diferença.

// Cargo

// Percentual

// Gerente

// 10%

// Engenheiro

// 20%

// Técnico

// 30%

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, double> aumentoPorCargo = {
        {"Gerente", 0.1},
        {"Engenheiro", 0.2},
        {"Técnico", 0.3}};

    string cargo;
    double salario;

    cout << "Digite o cargo do funcionário: ";
    cin >> cargo;

    cout << "Digite o salário do funcionário: ";
    cin >> salario;

    if (aumentoPorCargo.find(cargo) != aumentoPorCargo.end())
    {
        double percentualAumento = aumentoPorCargo[cargo];
        double aumento = salario * percentualAumento;
        double novoSalario = salario + aumento;

        cout << "Salário antigo: " << salario << endl;
        cout << "Novo salário: " << novoSalario << endl;
        cout << "Diferença: " << aumento << endl;
    }
    else
    {
        double aumento = salario * 0.05;
        double novoSalario = salario + aumento;

        cout << "Cargo não encontrado na tabela. Aumento de 5% aplicado." << endl;
        cout << "Salário antigo: " << salario << endl;
        cout << "Novo salário: " << novoSalario << endl;
        cout << "Diferença: " << aumento << endl;
    }

    return 0;
}