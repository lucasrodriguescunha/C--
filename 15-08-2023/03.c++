// Exercício 3:

// Supondo que a população de um país "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento, e que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento. Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de crescimento.

// O cálculo deve ser realizado por uma função separada que retorna apenas o número de anos.

#include <stdio.h>  // biblioteca padrão de entrada e saída de dados: printf, scanf
#include <stdlib.h> // biblioteca padrão: malloc, calloc, free, exit

// função principal do programa
int main(void)
{

  // declaração de variáveis
  float popA = 90000000, // população do país A
      popB = 200000000,  // população do país B
      taxaA = 0.03,      // taxa de crescimento do país A = 3%
      taxaB = 0.015;     // taxa de crescimento do país B = 1.5%

  int anos = 0; // anos necessários para a população do país A ultrapassar a população do país B

  // laço de repetição para calcular os anos
  while (popA < popB)
  {
    popA = popA + (popA * taxaA); // população do país A
    popB = popB + (popB * taxaB); // população do país B
    anos++;                       // incremento de anos
  }

  // saída de dados
  printf("A população do país A ultrapassará a população do país B em %d anos.\n", anos);

  return 0;
}