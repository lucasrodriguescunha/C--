// Faça um programa que armazene em um vetor de inteiros as quantidades compradas de 5 produtos. Em outro vetor de reais, armazene o valor unitário de cada produto. O programa deve, ao final, mostrar o valor total a ser pago por cada produto assim como o valor total da compra. Considere que o índice do vetor corresponde ao código do produto.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int produtos = 5;
    vector<int> prod_quantidades(produtos, 0);
    vector<double> prod_valores(produtos, 0.0);
    vector<double> total_por_produto(produtos, 0.0);
    double total_compra = 0.0;

    // Entrada de dados
    for (int i = 0; i < produtos; i++)
    {
        cout << "Digite a quantidade do produto " << i + 1 << ": ";
        cin >> prod_quantidades[i];
        cout << "Digite o valor unitario do produto " << i + 1 << ": ";
        cin >> prod_valores[i];
    }

    // Cálculo dos valores totais
    for (int i = 0; i < produtos; i++)
    {
        total_por_produto[i] = prod_quantidades[i] * prod_valores[i];
        total_compra += total_por_produto[i];
    }

    // Saída de resultados
    cout << "\nValor total por produto:" << endl;
    for (int i = 0; i < produtos; i++)
    {
        cout << "Produto " << i + 1 << ": R$ " << total_por_produto[i] << endl;
    }

    cout << "\nValor total da compra: R$ " << total_compra << endl;

    return 0;
}