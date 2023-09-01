#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Função para calcular a adição de números em notação científica
string adicao(string num1, string num2)
{
  double a, b;
  sscanf(num1.c_str(), "%lf", &a);
  sscanf(num2.c_str(), "%lf", &b);
  double resultado = a + b;
  return to_string(resultado);
}

// Função para calcular a subtração de números em notação científica
string subtracao(string num1, string num2)
{
  double a, b;
  sscanf(num1.c_str(), "%lf", &a);
  sscanf(num2.c_str(), "%lf", &b);
  double resultado = a - b;
  return to_string(resultado);
}

// Função para calcular a multiplicação de números em notação científica
string multiplicacao(string num1, string num2)
{
  double a, b;
  sscanf(num1.c_str(), "%lf", &a);
  sscanf(num2.c_str(), "%lf", &b);
  double resultado = a * b;
  return to_string(resultado);
}

// Função para calcular a divisão de números em notação científica
string divisao(string num1, string num2)
{
  double a, b;
  sscanf(num1.c_str(), "%lf", &a);
  sscanf(num2.c_str(), "%lf", &b);
  if (b == 0)
  {
    return "ERRO: Divisao por zero!";
  }
  double resultado = a / b;
  return to_string(resultado);
}

int main()
{
  string num1, num2;
  char operacao;

  // Solicita ao usuário os números e a operação
  cout << "Digite o primeiro numero em notacao cientifica: ";
  cin >> num1;
  cout << "Digite o segundo numero em notacao cientifica: ";
  cin >> num2;
  cout << "Escolha a operacao (+, -, *, /): ";
  cin >> operacao;

  string resultado;

  // Realiza a operação escolhida e exibe o resultado
  switch (operacao)
  {
  case '+':
    resultado = adicao(num1, num2);
    break;
  case '-':
    resultado = subtracao(num1, num2);
    break;
  case '*':
    resultado = multiplicacao(num1, num2);
    break;
  case '/':
    resultado = divisao(num1, num2);
    break;
  default:
    cout << "Operação invalida!";
    return 1;
  }

  cout << "Resultado: " << resultado << endl;

  return 0;
}