// Exercício 4:

// Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius. O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: ( 32) 95 C = F −

#include <stdio.h>  // bibilioteca padrão de entrada e saída de dados: cin e cout
#include <stdlib.h> // biblioteca padrão de funções do sistema: system("pause") e system("cls")
#include <iostream> // biblioteca de entrada e saída de dados

using namespace std; // usando o namespace padrão

double fahrenheitToCelsius(double fahrenheit) // função para converter fahrenheit para celsius
{
  return (fahrenheit - 32) * 5.0 / 9.0; // retorna o valor convertido
}

int main() // função principal
{
  cout << "Conversao de Fahrenheit para Celsius:" << endl; // imprime na tela

  for (int fahrenheit = 0; fahrenheit <= 100; fahrenheit++) // loop de 0 a 100
  {
    double celsius = fahrenheitToCelsius(fahrenheit);                        // chama a função para converter fahrenheit para celsius
    cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl; // imprime na tela
  }

  return 0; // retorno da função main
}
