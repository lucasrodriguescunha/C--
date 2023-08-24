// Exercício 7:

// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.

#include <stdio.h>  // biblioteca padrão de entrada e saída de dados
#include <stdlib.h> // biblioteca padrão
#include <math.h>   // biblioteca matemática

int idadeDias(int anos, int meses, int dias)
{                                                   // função que recebe a idade em anos, meses e dias e retorna a idade em dias
    int idade = (anos * 365) + (meses * 30) + dias; // calcula a idade em dias
    return idade;                                   // retorna a idade em dias
}

int main()
{                                                                  // função principal
    int anos, meses, dias;                                         // declara as variáveis
    printf("Digite a idade em anos: ");                            // pede para o usuário digitar a idade em anos
    scanf("%d", &anos);                                            // lê a idade em anos
    printf("Digite a idade em meses: ");                           // pede para o usuário digitar a idade em meses
    scanf("%d", &meses);                                           // lê a idade em meses
    printf("Digite a idade em dias: ");                            // pede para o usuário digitar a idade em dias
    scanf("%d", &dias);                                            // lê a idade em dias
    printf("A idade em dias eh: %d", idadeDias(anos, meses, dias)); // chama a função idadeDias e imprime a idade em dias
    return 0;                                                      // retorna 0 para a função principal
}