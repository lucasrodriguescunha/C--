// Exercício 5: Realizar uma pesquisa em livro e/ou internet a respeito do algoritmo de Pesquisa Binária. 

// Realizar manualmente três rastreios sobre o código fonte, pesquisando os valores 75, 22 e 90 no seguinte vetor: 

// 0 

// 18 

// 22 

// 25 

// 34 

// 40 

// 51 

// 66 

// 75 

// 87

// Em seguida, faça a implementação em C++ do código fonte de Pesquisa Binária.

#include <iostream>

using namespace std;

int pesquisaBinaria(int vetor[], int tamanho, int valor)
{
  int inicio = 0;
  int fim = tamanho - 1;
  int meio;

  while (inicio <= fim)
  {
    meio = (inicio + fim) / 2;
    if (valor == vetor[meio])
    {
      return meio;
    }
    else if (valor < vetor[meio])
    {
      fim = meio - 1;
    }
    else
    {
      inicio = meio + 1;
    }
  }
  return -1;
}

int main()
{
  int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int valor;

  cout << "Digite o valor a ser pesquisado: ";
  cin >> valor;

  int posicao = pesquisaBinaria(vetor, tamanho, valor);

  if (posicao == -1)
  {
    cout << "Valor nao encontrado" << endl;
  }
  else
  {
    cout << "Valor encontrado na posicao " << posicao << endl;
  }

  return 0;
}

