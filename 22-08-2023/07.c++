// Exercício 7: Implementar a sequência de Fibonacci Recursivamente e Iterativamente. O  usuário deve informar a posição desejada e o programa retornar o valor da sequência nessa determinada posição. 

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946…

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int fibonacciIterativo(int N)
{
  int anterior = 0;
  int atual = 1;
  int proximo;
  for (int i = 0; i < N; i++)
  {
    proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }
  return anterior;
}

int fibonacciRecursivo(int N)
{
  if (N <= 0)
  {
    return -1;
  }
  else if (N == 1)
  {
    return 0;
  }
  else if (N == 2)
  {
    return 1;
  }
  else
  {
    return fibonacciRecursivo(N - 1) + fibonacciRecursivo(N - 2);
  }
}

int main()
{
  int N;
  cout << "Digite o valor de N: ";
  cin >> N;
  cout << "Fibonacci iterativo: " << fibonacciIterativo(N) << endl;
  cout << "Fibonacci recursivo: " << fibonacciRecursivo(N) << endl;
  return 0;
}

