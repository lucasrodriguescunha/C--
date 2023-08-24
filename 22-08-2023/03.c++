// Exercício 3: Faça uma função que receba por parâmetro o tempo de duração expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e  segundos.

#include <iostream>

void converterTempo(int segundos, int &horas, int &minutos, int &segundos_restantes)
{
  horas = segundos / 3600; // 1 hora tem 3600 segundos
  segundos_restantes = segundos % 3600;
  minutos = segundos_restantes / 60; // 1 minuto tem 60 segundos
  segundos_restantes %= 60;
}

int main()
{
  using namespace std; // Uso do namespace std

  int segundos;
  cout << "Digite o tempo em segundos: ";
  cin >> segundos;

  int horas, minutos, segundos_restantes;
  converterTempo(segundos, horas, minutos, segundos_restantes);

  cout << "Tempo equivalente: " << horas << " horas, " << minutos << " minutos, " << segundos_restantes << " segundos" << endl;

  return 0;
}
