// Exercício 2: Faça uma função que receba um parâmetro com o total de minutos passados ao longo do dia e também dois parâmetros que devem ser preenchidos com o  valor da hora e do minuto corrente. Faça um programa que leia do teclado quantos minutos se passaram desde meia-noite e imprima no formato de horas e minutos.

#include <iostream> // cout, cin, endl
using namespace std; // std::cout, std::cin, std::endl

void minutosParaHorasMinutos(int totalMinutos, int &hora, int &minuto) 
{                             // & = passagem por referência
  hora = totalMinutos / 60;   // Calcula as horas
  minuto = totalMinutos % 60; // Calcula os minutos restantes
}

int main()
{
  int totalMinutos, hora, minuto;

  cout << "Digite o total de minutos passados desde meia-noite: ";
  cin >> totalMinutos;

  minutosParaHorasMinutos(totalMinutos, hora, minuto);

  cout << "Hora corrente: " << hora << "h " << minuto << "min" << endl;

  return 0;
}
