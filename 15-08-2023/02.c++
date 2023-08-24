// Exercício 2:

// Construir um programa que na função main leia 3 valores informados pelo usuário e  utilize uma função para retornar o maior deles. Em seguida, a função main deve imprimir o resultado.

#include <iostream> // biblioteca para entrada e saída de dados

using namespace std; // utilizando o namespace padrão

int maior(int a, int b, int c)
{ // função para retornar o maior valor
  if (a > b && a > c)
  {           // se a for maior que b e a for maior que c
    return a; // retorna a
  }
  else if (b > a && b > c)
  {           // se b for maior que a e b for maior que c
    return b; // retorna b
  }
  else
  {           // se não
    return c; // retorna c
  }
}

int main()
{                                                         // função principal
  int a, b, c;                                            // declaração das variáveis
  cout << "Digite o primeiro valor: ";                    // mensagem para o usuário
  cin >> a;                                               // entrada de dados
  cout << "Digite o segundo valor: ";                     // mensagem para o usuário
  cin >> b;                                               // entrada de dados
  cout << "Digite o terceiro valor: ";                    // mensagem para o usuário
  cin >> c;                                               // entrada de dados
  cout << "O maior valor eh: " << maior(a, b, c) << endl; // mensagem para o usuário
  return 0;                                               // retorno da função main
}