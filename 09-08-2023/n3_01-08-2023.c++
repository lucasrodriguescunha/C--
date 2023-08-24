// Para uma determinada avaliação aplicada, fazer um programa que armazene em um vetor as notas de 5 alunos. Para cada um desses alunos, calcular e armazenar em um vetor o desvio em relação a média. Em seguida, calcular e armazenar em outro vetor os desvios [em relação a média] ao quadrado das notas de cada aluno. Ao final, calcular e apresentar a variância e o desvio padrão.

#include <iostream>
#include <cmath>

int main()
{
  const int numAlunos = 5;
  double notas[numAlunos];
  double media = 0.0;

  // Leitura das notas e cálculo da média
  for (int i = 0; i < numAlunos; ++i)
  {
    std::cout << "Digite a nota do aluno " << i + 1 << ": ";
    std::cin >> notas[i];
    media += notas[i];
  }

  media /= numAlunos; // Cálculo da média

  double desvios[numAlunos];
  double desviosQuadrados[numAlunos];
  double somaDesviosQuadrados = 0.0;

  // Cálculo dos desvios e desvios ao quadrado
  for (int i = 0; i < numAlunos; ++i)
  {
    desvios[i] = notas[i] - media;
    desviosQuadrados[i] = desvios[i] * desvios[i];
    somaDesviosQuadrados += desviosQuadrados[i];
  }

  double variancia = somaDesviosQuadrados / numAlunos;
  double desvioPadrao = std::sqrt(variancia);

  // Apresentação dos resultados
  std::cout << "Média: " << media << std::endl;
  std::cout << "Variância: " << variancia << std::endl;
  std::cout << "Desvio Padrão: " << desvioPadrao << std::endl;

  return 0;
}