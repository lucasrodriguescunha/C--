// Exercício 6: Calcular o somatório de 1 à N Recursivamente e Iterativamente. Valores menores ou iguais a zero representam situações de erro. 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int somatorioIterativo(int N)
{
  int somatorio = 0;
  for (int i = 1; i <= N; i++)
  {
    somatorio += i;
  }
  return somatorio;
}

int somatorioRecursivo(int N)
{
  if (N <= 0)
  {
    return -1;
  }
  else if (N == 1)
  {
    return 1;
  }
  else
  {
    return N + somatorioRecursivo(N - 1);
  }
}

int main()
{
  int N;
  cout << "Digite o valor de N: ";
  cin >> N;
  cout << "Somatorio iterativo: " << somatorioIterativo(N) << endl;
  cout << "Somatorio recursivo: " << somatorioRecursivo(N) << endl;
  return 0;
}

